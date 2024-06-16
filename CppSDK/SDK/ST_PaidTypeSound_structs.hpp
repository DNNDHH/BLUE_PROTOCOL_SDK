#pragma once

 

// Package: ST_PaidTypeSound

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_PaidTypeSound.ST_PaidTypeSound
// 0x0028 (0x0028 - 0x0000)
struct FST_PaidTypeSound final
{
public:
	class UAkAudioEvent*                          None_28_AF8455D54DF604F9DB2E2093259F676A;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          RealMoney_24_E1BB227641E64949C62DB38EAB2ED988;     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          RoseOrb_25_7D691A304D27BE4225F762B464FCA980;       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          BPPoint_26_F3642EA1440D1A9BD78E6FA35897D880;       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SeasonPoint_27_37AD3B8F4F283D146021829148CD1A2B;   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_PaidTypeSound) == 0x000008, "Wrong alignment on FST_PaidTypeSound");
static_assert(sizeof(FST_PaidTypeSound) == 0x000028, "Wrong size on FST_PaidTypeSound");
static_assert(offsetof(FST_PaidTypeSound, None_28_AF8455D54DF604F9DB2E2093259F676A) == 0x000000, "Member 'FST_PaidTypeSound::None_28_AF8455D54DF604F9DB2E2093259F676A' has a wrong offset!");
static_assert(offsetof(FST_PaidTypeSound, RealMoney_24_E1BB227641E64949C62DB38EAB2ED988) == 0x000008, "Member 'FST_PaidTypeSound::RealMoney_24_E1BB227641E64949C62DB38EAB2ED988' has a wrong offset!");
static_assert(offsetof(FST_PaidTypeSound, RoseOrb_25_7D691A304D27BE4225F762B464FCA980) == 0x000010, "Member 'FST_PaidTypeSound::RoseOrb_25_7D691A304D27BE4225F762B464FCA980' has a wrong offset!");
static_assert(offsetof(FST_PaidTypeSound, BPPoint_26_F3642EA1440D1A9BD78E6FA35897D880) == 0x000018, "Member 'FST_PaidTypeSound::BPPoint_26_F3642EA1440D1A9BD78E6FA35897D880' has a wrong offset!");
static_assert(offsetof(FST_PaidTypeSound, SeasonPoint_27_37AD3B8F4F283D146021829148CD1A2B) == 0x000020, "Member 'FST_PaidTypeSound::SeasonPoint_27_37AD3B8F4F283D146021829148CD1A2B' has a wrong offset!");

}

