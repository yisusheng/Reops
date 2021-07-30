Attribute VB_Name = "Ä£¿é1"
Sub GuessName()
    Dim Msg As String
    Dim Ans As Long
    Msg = "Is your name" & Application.UserName & "?"
    Ans = MsgBox(Msg, vbYesNo)
    If Ans = vbNo Then MsgBox "oh,never mind."
    If Ans = vbYes Then MsgBox "I must be clairvoyant!"
    ActiveCell.Value = "1"
End Sub

