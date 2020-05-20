/***
 * Interface
 */
public interface MethodFactoryMethod {
    MethodProcessor create(Request request, Response response);
}
