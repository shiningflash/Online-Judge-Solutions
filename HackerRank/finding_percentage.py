def get_percentage(student_marks, query_name):
    the_marks = list(student_marks[query_name])
    return sum(the_marks) / len(the_marks)

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    print("%.2f" % get_percentage(student_marks, query_name))
