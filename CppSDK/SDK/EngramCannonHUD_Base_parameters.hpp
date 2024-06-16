#pragma once

 

// Package: EngramCannonHUD_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.ExecuteUbergraph_EngramCannonHUD_Base
// 0x0080 (0x0080 - 0x0000)
struct EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45A2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEngramCannonHUD_KeyHelp_C*             CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A5[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerEngramCannonComponent*         CallFunc_GetPlayerEngramCannonComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerEngramCannonComponent*         CallFunc_GetPlayerEngramCannonComponent_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A6[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A7[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEngramCannonHUD_Detail_C*              CallFunc_Create_ReturnValue_1;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A8[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUIZOrder_ReturnValue;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base) == 0x000008, "Wrong alignment on EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base");
static_assert(sizeof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base) == 0x000080, "Wrong size on EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, EntryPoint) == 0x000000, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_Create_ReturnValue) == 0x000008, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000028, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000030, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_3) == 0x000039, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_GetPlayerEngramCannonComponent_ReturnValue) == 0x000040, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_GetPlayerEngramCannonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_GetPlayerEngramCannonComponent_ReturnValue_1) == 0x000048, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_GetPlayerEngramCannonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_4) == 0x000050, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_5) == 0x000051, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_PlayAnimationForward_ReturnValue) == 0x000058, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_GetEndTime_ReturnValue) == 0x000060, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_6) == 0x000064, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_Create_ReturnValue_1) == 0x000068, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_7) == 0x000070, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_MakeLiteralByte_ReturnValue) == 0x000071, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_8) == 0x000072, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_GetUIZOrder_ReturnValue) == 0x000074, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_GetUIZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base, CallFunc_IsValid_ReturnValue_9) == 0x000078, "Member 'EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");

}

