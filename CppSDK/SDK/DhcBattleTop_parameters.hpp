#pragma once

 

// Package: DhcBattleTop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleTop.DhcBattleTop_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTop_C_OnClose__DelegateSignature final
{
public:
	bool                                          InGoToNext;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on DhcBattleTop_C_OnClose__DelegateSignature");
static_assert(sizeof(DhcBattleTop_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on DhcBattleTop_C_OnClose__DelegateSignature");
static_assert(offsetof(DhcBattleTop_C_OnClose__DelegateSignature, InGoToNext) == 0x000000, "Member 'DhcBattleTop_C_OnClose__DelegateSignature::InGoToNext' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.ExecuteUbergraph_DhcBattleTop
// 0x03F0 (0x03F0 - 0x0000)
struct DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDhcBattleInfo                       K2Node_CustomEvent_InInfo;                         // 0x0008(0x0010)(ConstParm)
	bool                                          K2Node_CustomEvent_InActivate_1;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A5F[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0020(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A60[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, struct FSBDhcBattleInfo& InAttackCheckerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A61[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A62[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, struct FSBDhcBattleInfo& InAttackCheckerInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A63[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A64[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  K2Node_ComponentBoundEvent_InClassType;            // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A65[0x5];                                     // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              K2Node_ComponentBoundEvent_InScoreInfo;            // 0x00B0(0x00D8)()
	bool                                          K2Node_ComponentBoundEvent_InIsScoreInfoEmpty;     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A66[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 SelectIndex)>            K2Node_CreateDelegate_OutputDelegate_2;            // 0x018C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A67[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SelectIndex;                    // 0x01B0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A68[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A69[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01F8(0x0018)()
	ESBClassType                                  K2Node_CustomEvent_InClassType;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A6A[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              K2Node_CustomEvent_InScoreInfo;                    // 0x0218(0x00D8)()
	bool                                          K2Node_CustomEvent_InIsScoreInfoEmpty;             // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A6B[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x02F8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A6C[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x030C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InActivate;                     // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A6D[0x2];                                     // 0x031E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0320(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A6E[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0334(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0345(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0346(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0347(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A6F[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A70[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0378(0x0018)()
	class USBMultipleSelectDialog*                CallFunc_ShowMultipleSelectDialog_ReturnValue;     // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x039B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A71[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Find_Class_Actor_ActorObject;             // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Find_Class_Actor_Num;                     // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A72[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHC_ManagePortal_C*                 K2Node_DynamicCast_AsBP_DHC_Manage_Portal;         // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A73[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Find_Class_Actor_ActorObject_1;           // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Find_Class_Actor_Num_1;                   // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A74[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DHC_ManagePortal_C*                 K2Node_DynamicCast_AsBP_DHC_Manage_Portal_1;       // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A75[0x3];                                     // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x03DC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop) == 0x000008, "Wrong alignment on DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop");
static_assert(sizeof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop) == 0x0003F0, "Wrong size on DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, EntryPoint) == 0x000000, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InRetCode) == 0x000004, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InInfo) == 0x000008, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InActivate_1) == 0x000018, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InActivate_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000019, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetSBRetMessage_ReturnValue) == 0x000020, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000050, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetDhcBattleComponent_ReturnValue) == 0x000070, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetDhcBattleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000090, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_MakeLiteralByte_ReturnValue) == 0x000098, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue_2) == 0x000099, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetDhcBattleComponent_ReturnValue_1) == 0x0000A0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetDhcBattleComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue_3) == 0x0000A8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A9, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_ComponentBoundEvent_InClassType) == 0x0000AA, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_ComponentBoundEvent_InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_ComponentBoundEvent_InScoreInfo) == 0x0000B0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_ComponentBoundEvent_InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_ComponentBoundEvent_InIsScoreInfoEmpty) == 0x000188, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_ComponentBoundEvent_InIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate_2) == 0x00018C, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001A0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_SelectIndex) == 0x0001B0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_SelectIndex' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001B8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_SwitchInteger_CmpSuccess) == 0x0001C8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0001E8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001F8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InClassType) == 0x000210, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InScoreInfo) == 0x000218, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InIsScoreInfoEmpty) == 0x0002F0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_MakeArray_Array) == 0x0002F8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Not_PreBool_ReturnValue_2) == 0x000308, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate_3) == 0x00030C, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue_4) == 0x00031C, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CustomEvent_InActivate) == 0x00031D, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CustomEvent_InActivate' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate_4) == 0x000320, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, Temp_bool_Variable) == 0x000330, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate_5) == 0x000334, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue_5) == 0x000344, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, Temp_bool_Variable_1) == 0x000345, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Not_PreBool_ReturnValue_3) == 0x000346, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, Temp_bool_Variable_2) == 0x000347, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000348, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000350, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_Select_Default) == 0x000360, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_IsValid_ReturnValue_6) == 0x000370, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000378, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_ShowMultipleSelectDialog_ReturnValue) == 0x000390, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_ShowMultipleSelectDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000398, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000399, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_Select_Default_1) == 0x00039A, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_Select_Default_2) == 0x00039B, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Find_Class_Actor_ActorObject) == 0x0003A0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Find_Class_Actor_ActorObject' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Find_Class_Actor_Num) == 0x0003A8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Find_Class_Actor_Num' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_DynamicCast_AsBP_DHC_Manage_Portal) == 0x0003B0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_DynamicCast_AsBP_DHC_Manage_Portal' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_DynamicCast_bSuccess) == 0x0003B8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Find_Class_Actor_ActorObject_1) == 0x0003C0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Find_Class_Actor_ActorObject_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, CallFunc_Find_Class_Actor_Num_1) == 0x0003C8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::CallFunc_Find_Class_Actor_Num_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_DynamicCast_AsBP_DHC_Manage_Portal_1) == 0x0003D0, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_DynamicCast_AsBP_DHC_Manage_Portal_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_DynamicCast_bSuccess_1) == 0x0003D8, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003DC, "Member 'DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.ActivateBtnFullScreenForDetailedAttrResistStatus
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus final
{
public:
	bool                                          InActivate;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus) == 0x000001, "Wrong alignment on DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus");
static_assert(sizeof(DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus) == 0x000001, "Wrong size on DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus");
static_assert(offsetof(DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus, InActivate) == 0x000000, "Member 'DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus::InActivate' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.UpdateClassTypeListItemSelected
// 0x00E8 (0x00E8 - 0x0000)
struct DhcBattleTop_C_UpdateClassTypeListItemSelected final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A76[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0008(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsScoreInfoEmpty;                                // 0x00E0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_UpdateClassTypeListItemSelected) == 0x000008, "Wrong alignment on DhcBattleTop_C_UpdateClassTypeListItemSelected");
static_assert(sizeof(DhcBattleTop_C_UpdateClassTypeListItemSelected) == 0x0000E8, "Wrong size on DhcBattleTop_C_UpdateClassTypeListItemSelected");
static_assert(offsetof(DhcBattleTop_C_UpdateClassTypeListItemSelected, InClassType) == 0x000000, "Member 'DhcBattleTop_C_UpdateClassTypeListItemSelected::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_UpdateClassTypeListItemSelected, InScoreInfo) == 0x000008, "Member 'DhcBattleTop_C_UpdateClassTypeListItemSelected::InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_UpdateClassTypeListItemSelected, InIsScoreInfoEmpty) == 0x0000E0, "Member 'DhcBattleTop_C_UpdateClassTypeListItemSelected::InIsScoreInfoEmpty' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.OnSelectDialogResult
// 0x0004 (0x0004 - 0x0000)
struct DhcBattleTop_C_OnSelectDialogResult final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTop_C_OnSelectDialogResult) == 0x000004, "Wrong alignment on DhcBattleTop_C_OnSelectDialogResult");
static_assert(sizeof(DhcBattleTop_C_OnSelectDialogResult) == 0x000004, "Wrong size on DhcBattleTop_C_OnSelectDialogResult");
static_assert(offsetof(DhcBattleTop_C_OnSelectDialogResult, SelectIndex) == 0x000000, "Member 'DhcBattleTop_C_OnSelectDialogResult::SelectIndex' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A77[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0008(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsScoreInfoEmpty;                                // 0x00E0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature");
static_assert(sizeof(DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature) == 0x0000E8, "Wrong size on DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature");
static_assert(offsetof(DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature, InClassType) == 0x000000, "Member 'DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature, InScoreInfo) == 0x000008, "Member 'DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature::InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature, InIsScoreInfoEmpty) == 0x0000E0, "Member 'DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature::InIsScoreInfoEmpty' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.ActivateUIBlockerFrontRow
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTop_C_ActivateUIBlockerFrontRow final
{
public:
	bool                                          InActivate;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_ActivateUIBlockerFrontRow) == 0x000001, "Wrong alignment on DhcBattleTop_C_ActivateUIBlockerFrontRow");
static_assert(sizeof(DhcBattleTop_C_ActivateUIBlockerFrontRow) == 0x000001, "Wrong size on DhcBattleTop_C_ActivateUIBlockerFrontRow");
static_assert(offsetof(DhcBattleTop_C_ActivateUIBlockerFrontRow, InActivate) == 0x000000, "Member 'DhcBattleTop_C_ActivateUIBlockerFrontRow::InActivate' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.OnLoadHighScoreInfoDelegate
// 0x0018 (0x0018 - 0x0000)
struct DhcBattleTop_C_OnLoadHighScoreInfoDelegate final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A78[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleInfo                       InInfo;                                            // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(DhcBattleTop_C_OnLoadHighScoreInfoDelegate) == 0x000008, "Wrong alignment on DhcBattleTop_C_OnLoadHighScoreInfoDelegate");
static_assert(sizeof(DhcBattleTop_C_OnLoadHighScoreInfoDelegate) == 0x000018, "Wrong size on DhcBattleTop_C_OnLoadHighScoreInfoDelegate");
static_assert(offsetof(DhcBattleTop_C_OnLoadHighScoreInfoDelegate, InRetCode) == 0x000000, "Member 'DhcBattleTop_C_OnLoadHighScoreInfoDelegate::InRetCode' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_OnLoadHighScoreInfoDelegate, InInfo) == 0x000008, "Member 'DhcBattleTop_C_OnLoadHighScoreInfoDelegate::InInfo' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.Open
// 0x0050 (0x0050 - 0x0000)
struct DhcBattleTop_C_Open final
{
public:
	class ASBPlayerCharacter*                     LocalSBPC;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDhcBattleComponent*                  LocalAttackCheckerComp;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A79[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleInfo                       K2Node_MakeStruct_SBDhcBattleInfo;                 // 0x0028(0x0010)()
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestLoadHighScoreInfo_ReturnValue;     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A7A[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_Open) == 0x000008, "Wrong alignment on DhcBattleTop_C_Open");
static_assert(sizeof(DhcBattleTop_C_Open) == 0x000050, "Wrong size on DhcBattleTop_C_Open");
static_assert(offsetof(DhcBattleTop_C_Open, LocalSBPC) == 0x000000, "Member 'DhcBattleTop_C_Open::LocalSBPC' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, LocalAttackCheckerComp) == 0x000008, "Member 'DhcBattleTop_C_Open::LocalAttackCheckerComp' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, Temp_int_Variable) == 0x000010, "Member 'DhcBattleTop_C_Open::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, Temp_int_Variable_1) == 0x000014, "Member 'DhcBattleTop_C_Open::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, CallFunc_GetDhcBattleComponent_ReturnValue) == 0x000018, "Member 'DhcBattleTop_C_Open::CallFunc_GetDhcBattleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'DhcBattleTop_C_Open::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, K2Node_MakeStruct_SBDhcBattleInfo) == 0x000028, "Member 'DhcBattleTop_C_Open::K2Node_MakeStruct_SBDhcBattleInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, Temp_bool_Variable) == 0x000038, "Member 'DhcBattleTop_C_Open::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, CallFunc_RequestLoadHighScoreInfo_ReturnValue) == 0x000039, "Member 'DhcBattleTop_C_Open::CallFunc_RequestLoadHighScoreInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, K2Node_Select_Default) == 0x00003C, "Member 'DhcBattleTop_C_Open::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000040, "Member 'DhcBattleTop_C_Open::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_Open, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'DhcBattleTop_C_Open::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.SetupInfo
// 0x0230 (0x0230 - 0x0000)
struct DhcBattleTop_C_SetupInfo final
{
public:
	struct FSBDhcBattleInfo                       InInfo;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          LocalIsScoreInfoEmpty;                             // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A7B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              LocalScoreInfo;                                    // 0x0018(0x00D8)(Edit, BlueprintVisible)
	ESBClassType                                  LocalPlayerClassType;                              // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A7C[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       LocalListItem;                                     // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsClassScoreNotMeasured;                      // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A7D[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDhcBattleHighScoreInfo>      LocalScoreInfoPerClassTypes;                       // 0x0108(0x0010)(Edit, BlueprintVisible)
	class UDhcBattleTopClassTypeListItem_C*       CallFunc_GetListItemByClassType_OutListItem;       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A7E[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsScoreInfoEmpty_OutIsScoreInfoEmpty;     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A7F[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              CallFunc_GetScoreInfo_OutScoreInfo;                // 0x0138(0x00D8)()
	ESBClassType                                  CallFunc_GetClassType_OutClassType;                // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A80[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A81[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTopClassTypeListItem_C*       CallFunc_GetCurrSelectedListItem_OutListItem;      // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_SetupInfo) == 0x000008, "Wrong alignment on DhcBattleTop_C_SetupInfo");
static_assert(sizeof(DhcBattleTop_C_SetupInfo) == 0x000230, "Wrong size on DhcBattleTop_C_SetupInfo");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, InInfo) == 0x000000, "Member 'DhcBattleTop_C_SetupInfo::InInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, LocalIsScoreInfoEmpty) == 0x000010, "Member 'DhcBattleTop_C_SetupInfo::LocalIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, LocalScoreInfo) == 0x000018, "Member 'DhcBattleTop_C_SetupInfo::LocalScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, LocalPlayerClassType) == 0x0000F0, "Member 'DhcBattleTop_C_SetupInfo::LocalPlayerClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, LocalListItem) == 0x0000F8, "Member 'DhcBattleTop_C_SetupInfo::LocalListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, LocalIsClassScoreNotMeasured) == 0x000100, "Member 'DhcBattleTop_C_SetupInfo::LocalIsClassScoreNotMeasured' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, LocalScoreInfoPerClassTypes) == 0x000108, "Member 'DhcBattleTop_C_SetupInfo::LocalScoreInfoPerClassTypes' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_GetListItemByClassType_OutListItem) == 0x000118, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_GetListItemByClassType_OutListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000120, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_PlayAnimationForward_ReturnValue) == 0x000128, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_IsScoreInfoEmpty_OutIsScoreInfoEmpty) == 0x000130, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_IsScoreInfoEmpty_OutIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_GetScoreInfo_OutScoreInfo) == 0x000138, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_GetScoreInfo_OutScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_GetClassType_OutClassType) == 0x000210, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_GetClassType_OutClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_Array_Length_ReturnValue) == 0x000214, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_GetPlayerClassType_ClassType) == 0x000218, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000219, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_GetCurrSelectedListItem_OutListItem) == 0x000220, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_GetCurrSelectedListItem_OutListItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_IsValid_ReturnValue_1) == 0x000228, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_IsValid_ReturnValue_2) == 0x000229, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetupInfo, CallFunc_Not_PreBool_ReturnValue_1) == 0x00022A, "Member 'DhcBattleTop_C_SetupInfo::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.SetLayout
// 0x0018 (0x0018 - 0x0000)
struct DhcBattleTop_C_SetLayout final
{
public:
	bool                                          InIsScoreMeasured;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              LocalVisibility;                                   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsScoreMeasured;                              // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A82[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTop_C_SetLayout) == 0x000008, "Wrong alignment on DhcBattleTop_C_SetLayout");
static_assert(sizeof(DhcBattleTop_C_SetLayout) == 0x000018, "Wrong size on DhcBattleTop_C_SetLayout");
static_assert(offsetof(DhcBattleTop_C_SetLayout, InIsScoreMeasured) == 0x000000, "Member 'DhcBattleTop_C_SetLayout::InIsScoreMeasured' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, LocalVisibility) == 0x000001, "Member 'DhcBattleTop_C_SetLayout::LocalVisibility' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, LocalIsScoreMeasured) == 0x000002, "Member 'DhcBattleTop_C_SetLayout::LocalIsScoreMeasured' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, Temp_bool_Variable) == 0x000003, "Member 'DhcBattleTop_C_SetLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, Temp_byte_Variable) == 0x000004, "Member 'DhcBattleTop_C_SetLayout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, Temp_byte_Variable_1) == 0x000005, "Member 'DhcBattleTop_C_SetLayout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'DhcBattleTop_C_SetLayout::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'DhcBattleTop_C_SetLayout::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, K2Node_Select_Default) == 0x000011, "Member 'DhcBattleTop_C_SetLayout::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, Temp_byte_Variable_2) == 0x000012, "Member 'DhcBattleTop_C_SetLayout::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, Temp_byte_Variable_3) == 0x000013, "Member 'DhcBattleTop_C_SetLayout::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, Temp_bool_Variable_1) == 0x000014, "Member 'DhcBattleTop_C_SetLayout::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetLayout, K2Node_Select_Default_1) == 0x000015, "Member 'DhcBattleTop_C_SetLayout::K2Node_Select_Default_1' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.SetSelectedClassTypeAndScore
// 0x0108 (0x0108 - 0x0000)
struct DhcBattleTop_C_SetSelectedClassTypeAndScore final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A83[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0008(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsScoreInfoEmpty;                                // 0x00E0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A84[0x1];                                     // 0x00E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_SetSelectedClassTypeAndScore) == 0x000008, "Wrong alignment on DhcBattleTop_C_SetSelectedClassTypeAndScore");
static_assert(sizeof(DhcBattleTop_C_SetSelectedClassTypeAndScore) == 0x000108, "Wrong size on DhcBattleTop_C_SetSelectedClassTypeAndScore");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, InClassType) == 0x000000, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, InScoreInfo) == 0x000008, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, InIsScoreInfoEmpty) == 0x0000E0, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::InIsScoreInfoEmpty' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, CallFunc_MakeLiteralBool_ReturnValue) == 0x0000E1, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, CallFunc_Not_PreBool_ReturnValue) == 0x0000E2, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, CallFunc_Clamp_ReturnValue) == 0x0000E4, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E8, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetSelectedClassTypeAndScore, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'DhcBattleTop_C_SetSelectedClassTypeAndScore::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DhcBattleTop.DhcBattleTop_C.SetGoToDhcMapBtnTextId
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleTop_C_SetGoToDhcMapBtnTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTop_C_SetGoToDhcMapBtnTextId) == 0x000004, "Wrong alignment on DhcBattleTop_C_SetGoToDhcMapBtnTextId");
static_assert(sizeof(DhcBattleTop_C_SetGoToDhcMapBtnTextId) == 0x000008, "Wrong size on DhcBattleTop_C_SetGoToDhcMapBtnTextId");
static_assert(offsetof(DhcBattleTop_C_SetGoToDhcMapBtnTextId, InTextID) == 0x000000, "Member 'DhcBattleTop_C_SetGoToDhcMapBtnTextId::InTextID' has a wrong offset!");
static_assert(offsetof(DhcBattleTop_C_SetGoToDhcMapBtnTextId, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'DhcBattleTop_C_SetGoToDhcMapBtnTextId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

