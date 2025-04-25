import java.util.Scanner;

class ProductCode {
    String name;
    int code;

    public ProductCode() {
        this.name = "codetree";
        this.code = 50;
    }

    public ProductCode(String product, int productCode) {
        this.name = product;
        this.code = productCode;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ProductCode productCode = new ProductCode();
        System.out.printf("product %d is %s\n", productCode.code, productCode.name);
        
        String name = sc.next();
        int code = sc.nextInt();

        ProductCode productCode2 = new ProductCode(name, code);
        System.out.printf("product %d is %s\n", productCode2.code, productCode2.name);
        sc.close();
    }
}