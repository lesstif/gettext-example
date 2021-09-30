# GNU gettext example


## make po template

```bash
make hello.pot
```

## make po from pot

```bash
msginit -i hello.pot -o ko.po -l ko_KR.utf8
msginit -i hello.pot -o de.po -l de_DE
```

## compile po to mo

```bash
msgfmt ko.po -o locale/ko/LC_MESSAGES/hello.mo
```
