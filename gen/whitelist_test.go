package gen

import (
	"strings"
	"testing"
)

func TestWhitelistFilter(t *testing.T) {
	names := []string{
		"QAbstractAnimation_new",
		"QTreeWidget_new",
		"QWidget_show",
		"QXmlStreamReader_new",
		"QPushButton_new",
		"QProcess_start",
	}
	for _, name := range names {
		className, _, _ := strings.Cut(name, "_")
		result := widgetNeededClasses[className]
		t.Logf("%s -> %s = %v", name, className, result)
		if className == "QAbstractAnimation" && result {
			t.Error("QAbstractAnimation should NOT be in whitelist")
		}
		if className == "QTreeWidget" && !result {
			t.Error("QTreeWidget should be in whitelist")
		}
	}
	t.Logf("Whitelist size: %d", len(widgetNeededClasses))
}
