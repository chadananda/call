/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


function playSound(soundfile) {
 embedobject = "<object width=\"0\" height=\"0>\" "
  + "<param name=\"src\" value=/sites/default/files/audio/"+soundfile+">"
  + "<param name=\"autoplay\" value=\"true\"> "
  + "<param name=\"controller\" value=\"true\"> "
  + "<embed type=\"audio\\mpeg\" src='/sites/default/files/audio/"+soundfile
  + " autostart=\"true\" loop=\"false\" width=\"0\" height=\"0\" "
  + "controller=\"true\" bgcolor=\"#333333\"></embed></object>";

 document.getElementById("audio_ph").innerHTML=embedobject;
}