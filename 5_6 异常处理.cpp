异常必须被catch捕获，然后在里面处理；捕获不了的就会被系统捕获，然后崩溃

try
{

}
catch(runtime_error err)
{
  cout<<err.what()<<endl;
}
