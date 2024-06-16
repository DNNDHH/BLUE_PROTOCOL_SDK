#pragma once

 

// Package: AestheShop_InAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function AestheShop_InAnime.AestheShop_InAnime_C.ExecuteUbergraph_AestheShop_InAnime
// 0x0010 (0x0010 - 0x0000)
struct AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime) == 0x000008, "Wrong alignment on AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime");
static_assert(sizeof(AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime) == 0x000010, "Wrong size on AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime");
static_assert(offsetof(AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime, EntryPoint) == 0x000000, "Member 'AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

