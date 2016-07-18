open Lwt;
open Cohttp;
open Cohttp_lwt_unix;


Client.get (Uri.of_string "http://www.ya.ru/")
