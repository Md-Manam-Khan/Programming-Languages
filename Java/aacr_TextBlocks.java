public class aacr_TextBlocks
{
    public static void main(String[] args)
    {
        String json;
        json = """
                {
                    "name": "Manam",
                    "semester": 6,
                    "university": "BAUST"
                }
                """;
        System.out.println(json);
        String html;
        html = """
                <html>
                    <body>
                        <p>Hello, Java</p>
                    </body>
                </html>""";
        System.out.println(html);
        String joined;
        joined = """
                This is one long line \
                written across two lines.
                """;
        System.out.print(joined);
        String quotes;
        quotes = """
                He said "Hello" and left.
                A tab:\tend
                """;
        System.out.print(quotes);
        String greeting;
        greeting = """
                Hello, %s!
                You are in semester %d.
                """.formatted("Manam", 6);
        System.out.print(greeting);
        System.out.println("Lines in json: " + json.lines().count());
    }
}
