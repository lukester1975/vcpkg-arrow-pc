#include <arrow/io/api.h>
#include <arrow/ipc/writer.h>
#include <arrow/api.h>

int main()
{
	auto file { arrow::io::FileOutputStream::Open("out") };
	auto f1 { arrow::field("f1", arrow::int8()) };
	auto schema { arrow::schema({ f1 }) };
	auto writer { arrow::ipc::MakeFileWriter(*file, schema) };
}
