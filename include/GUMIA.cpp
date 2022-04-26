//カメラ
void	cam(MenuEntry *entry)
{
	Process::Write32(0x004195E0, 0x44000000);
}
//カメラ2
void	cam2(MenuEntry *entry)
{
	Process::Write32(0x004195E0, 0x45000000);
}
//カメラ3
void	cam3(MenuEntry *entry)
{
	Process::Write32(0x004195E0, 0x43000000);
}
//フラッシュバック
void	flsh(MenuEntry *entry)
{
	Process::Write32(0x0048F9BC, 0x00000000);
}
//カスタム世界
void	custom(MenuEntry *entry)
{
	Process::Write32(0x012E2F4, 0x4211111A);
	Process::Write32(0x012E2F8, 0x4211111A);
}
//暗い世界
void	dark(MenuEntry *entry)
{
	Process::Write32(0x0418730, 0x00000000);
}
//明るい世界
void	light(MenuEntry *entry)
{
	Process::Write32(0x0418730, 0x6FFFFFFF);
}
//x-ray world
void	xray(MenuEntry *entry)
{
	Process::Write32(0x0419834, 0x47C34FFE);
}
//俯瞰
void	fukan(MenuEntry *entry)
{
	Process::Write32(0x0041957C, 0x00000000);
}
//こっち見てくる
void	lookme(MenuEntry *entry)
{
	Process::Write32(0x00482FA4, 0xBD000000);
}
//いつでも手振れる
void	tehureru(MenuEntry *entry)
{
	Process::Write32(0x0048352C, 0x3F800000);
}
//腕がバグる(オンラインのみ)　スノボとか釣り竿持ってみよう
void	udebag(MenuEntry *entry)
{
	Process::Write32(0x089BE47C, 0x004832A8);
}
/*

	↓害悪コード

*/
//***みたいなの回避
void	messe_kaihi(MenuEntry *entry)
{
	Process::Write32(0x0042C2B0, 0x73737373);
}
//メッセージ連投
void	rpms(MenuEntry *entry)
{
	Process::Write32(0x00429F5C, 0x00000002);
}
//↓分身チート
void	bunsin(MenuEntry *entry) //host
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000000);
	offset+=0x00000004;}
}
void	bunsin1(MenuEntry *entry) //player2
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000001);
	offset+=0x00000004;}
}
void	bunsin2(MenuEntry *entry) //player3
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000002);
	offset+=0x00000004;}
}
void	bunsin3(MenuEntry *entry) //player4
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000003);
	offset+=0x00000004;}
}
void	bunsin4(MenuEntry *entry) //player5
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000004);
	offset+=0x00000004;}
}
void	bunsin5(MenuEntry *entry) //player6
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000005);
	offset+=0x00000004;}
}
void	bunsin6(MenuEntry *entry) //player7
{
	u32 offset=0x0048367C;
	for (u32 i=0x0; i< 0x00000008; i++){
	Process::Write32(offset+0x00000000, 0x00000006);
	offset+=0x00000004;}
}
