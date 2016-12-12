Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim msg, title, title2
        msg = MsgBox("당신의 이름과 나이를 입력하시겠습니까?", vbQuestion + vbYesNo, "질문")
        If msg = vbYes Then

            title = InputBox("이름을 입력하시오!", vbOKCancel, "이름 입력창")
            title2 = InputBox("나이를 입력하시오!", vbOKCancel, "나이 입력창")
            MsgBox("반갑습니다!" + title + "씨, 올해" + title2 + "세 이군요!", vbInformation + vbOKOnly, "결과")
        Else
            MsgBox("입력을 거부하였습니다", vbInformation + vbOKOnly, "결과")
        End If

    End Sub
End Class
