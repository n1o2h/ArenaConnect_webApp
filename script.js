function displayMessage() {
    let messages = document.getElementById("messages-section");
    let conversation = document.getElementById("conversation-section");
    
    if (window.innerWidth < 480) {
        messages.style.display = "block";
        messages.style.width = "100vw";
        conversation.style.display = "none";
    }

}

function displayConversationBar() {
    let messages = document.getElementById("messages-section");
    let conversation = document.getElementById("conversation-section");
    if (window.innerWidth < 480) {
        messages.style.display = "none";
        conversation.style.display = "block";
    }
}

function displayConversationBarInTabs() {
    let conversation = document.getElementById("conversation-section");
    if (window.innerWidth < 720) {
        conversation.style.display = "block";
    }
}

function hideConversationBarInTabs() {
    let conversation = document.getElementById("conversation-section");
    if (window.innerWidth < 720) {
        conversation.style.display = "none";
    }
}

function displayMenu() {
    let link = document.getElementById("link");
    if (window.innerWidth < 720) {
        link.style.display = "flex";
    }
}

function displayModal() {
    let modal = document.getElementById("loginModal");

    modal.style.display ="flex";
}

function displaySignUpForm() {
    let connectionmodal = document.getElementById("loginModal");
    let signupmodal = document.getElementById("signUpModal");

    signupmodal.style.display ="flex";
    connectionmodal.style.display ="none";
}

function closeModal() {
    let connectionmodal = document.getElementById("loginModal");
    let signupmodal = document.getElementById("signUpModal");

    signupmodal.style.display ="none";
    connectionmodal.style.display ="none";
}