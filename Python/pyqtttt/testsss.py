import sys
from PySide6.QtWidgets import QApplication, QDialog, QLineEdit, QPushButton, QVBoxLayout


class Form(QDialog):
    def __init__(self, parent=None):
        super(Form, self).__init__(parent)

        self.edit = QLineEdit("Write my name here")
        self.button = QPushButton("Show Greeings")

        layout = QVBoxLayout()
        layout.addWidget(self.edit)
        layout.addWidget(self.button)

        self.setLayout(layout)
        self.button.clicked.connect(self.grettings)
        self.setWindowTitle("MyForm")

    def grettings(self):
        print(f"Hello {self.edit.text()}")


if __name__ == '__main__':
    app = QApplication(sys.argv)
    form = Form()
    form.show()

    sys.exit(app.exec())
