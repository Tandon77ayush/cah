const taskname = document.querySelector("#taskname");
const container = document.querySelector("#container");
let tasklist = [];
let id =1;


taskname.addEventListener("keypress",(evt)=>{

    if(evt.code == "Enter"){
        let task = {taskid : id, title: taskname.value, status:'pending' };
        id++;
        tasklist.push(task);
        addToDom(task);
        localStorage.setItem("tasklist",JSON.stringify(tasklist));
        console.log(tasklist)
    }
})

loadStorage();

function addToDom(task){
    const div = document.createElement("div");
    const p = document.createElement("span");

    p.innerText =task.title;
    div.appendChild(p);

    const chkbx = document.createElement("input");
    chkbx.setAttribute("type","checkbox");
    

    chkbx.addEventListener("click",()=>{
        let status = "Pending";
        if(chkbx.checked == true){
            p.style.textDecoration = "line-through";
            status = "Completed";
        }
        else{
            p.style.textDecoration = "none";
        }

        tasklist = tasklist.map((item)=>{
            if(item.taskid == task.taskid){
               item.status = status;
            }
            return item;
        })
        console.log(tasklist);
    })
    div.appendChild(chkbx);
    
    const deletebtn = document.createElement("button");
    deletebtn.innerText = "del";
    

    deletebtn.addEventListener("click",(evt)=>{
        const id = evt.target.parentNode.getAttribute("id");
        evt.target.parentNode.remove();
        tasklist = tasklist.filter((item)=>{
            if(item.taskid!=id)
                return true;
        });


        localStorage.setItem("tasklist",JSON.stringify(tasklist));
    });
    div.appendChild(deletebtn);
    container.appendChild(div);
    taskname.value = " ";
}


function loadStorage()
{
    tasklist=JSON.parse(localStorage.getItem("tasklist"))||[];
    tasklist.forEach(function(task){
        addToDom(task);
    })

}

