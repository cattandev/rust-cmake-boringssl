use std::os::raw::c_int;
#[link(name = "foo", kind = "static")]
extern "C" {
    fn aes_128_cbc() -> c_int;
}

fn main() {
    println!("Rust Code");

    unsafe {
        let a = aes_128_cbc();
        println!("{:?}", a);
    };
}
