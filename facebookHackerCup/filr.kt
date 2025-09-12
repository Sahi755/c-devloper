fun main() {
    val t = readLine()!!.toInt()

    repeat(t) {
        val n = readLine()!!.toInt()
        val arr = readLine()!!.split(" ").map { it.toInt() }

        // We know all numbers except one are the same
        val first = arr[0]
        val second = arr[1]

        val spyIndex = when {
            first != second -> {
                // Check if first is unique or second is unique
                if (arr[2] == first) 1 else 2
            }
            else -> {
                // first and second are equal, so find the one that differs
                arr.indexOfFirst { it != first } + 1
            }
        }

        println(spyIndex)
    }
}

