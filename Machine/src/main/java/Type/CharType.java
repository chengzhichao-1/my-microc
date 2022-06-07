package Type;

public class CharType extends BaseType {
    private char value;

    CharType() {
        this.value = 0;
    }

    public CharType(char var1) {
        this.value = var1;
    }

    public CharType(BaseType var1) {
        this.value = '\n';
    }

    public char getValue() {
        return this.value;
    }

    public void setValue(char var1) {
        this.value = var1;
    }
}