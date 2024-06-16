#pragma once

 

// Package: BossHPGauge

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BossHPGauge.BossHPGauge_C.ExecuteUbergraph_BossHPGauge
// 0x0030 (0x0030 - 0x0000)
struct BossHPGauge_C_ExecuteUbergraph_BossHPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDepth;                              // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_InScreenPositionOffset;               // 0x0010(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FC7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge) == 0x000008, "Wrong alignment on BossHPGauge_C_ExecuteUbergraph_BossHPGauge");
static_assert(sizeof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge) == 0x000030, "Wrong size on BossHPGauge_C_ExecuteUbergraph_BossHPGauge");
static_assert(offsetof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge, EntryPoint) == 0x000000, "Member 'BossHPGauge_C_ExecuteUbergraph_BossHPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge, K2Node_Event_InDepth) == 0x000004, "Member 'BossHPGauge_C_ExecuteUbergraph_BossHPGauge::K2Node_Event_InDepth' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge, CallFunc_GetSize_ReturnValue) == 0x000008, "Member 'BossHPGauge_C_ExecuteUbergraph_BossHPGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge, K2Node_Event_InScreenPositionOffset) == 0x000010, "Member 'BossHPGauge_C_ExecuteUbergraph_BossHPGauge::K2Node_Event_InScreenPositionOffset' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge, K2Node_Event_IsDesignTime) == 0x000020, "Member 'BossHPGauge_C_ExecuteUbergraph_BossHPGauge::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_ExecuteUbergraph_BossHPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'BossHPGauge_C_ExecuteUbergraph_BossHPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BossHPGauge_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BossHPGauge_C_PreConstruct) == 0x000001, "Wrong alignment on BossHPGauge_C_PreConstruct");
static_assert(sizeof(BossHPGauge_C_PreConstruct) == 0x000001, "Wrong size on BossHPGauge_C_PreConstruct");
static_assert(offsetof(BossHPGauge_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BossHPGauge_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetScreenPositionOffset
// 0x0010 (0x0010 - 0x0000)
struct BossHPGauge_C_SetScreenPositionOffset final
{
public:
	struct FLinearColor                           InScreenPositionOffset;                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BossHPGauge_C_SetScreenPositionOffset) == 0x000004, "Wrong alignment on BossHPGauge_C_SetScreenPositionOffset");
static_assert(sizeof(BossHPGauge_C_SetScreenPositionOffset) == 0x000010, "Wrong size on BossHPGauge_C_SetScreenPositionOffset");
static_assert(offsetof(BossHPGauge_C_SetScreenPositionOffset, InScreenPositionOffset) == 0x000000, "Member 'BossHPGauge_C_SetScreenPositionOffset::InScreenPositionOffset' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetDepth
// 0x0004 (0x0004 - 0x0000)
struct BossHPGauge_C_SetDepth final
{
public:
	float                                         InDepth;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BossHPGauge_C_SetDepth) == 0x000004, "Wrong alignment on BossHPGauge_C_SetDepth");
static_assert(sizeof(BossHPGauge_C_SetDepth) == 0x000004, "Wrong size on BossHPGauge_C_SetDepth");
static_assert(offsetof(BossHPGauge_C_SetDepth, InDepth) == 0x000000, "Member 'BossHPGauge_C_SetDepth::InDepth' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetLv
// 0x0050 (0x0050 - 0x0000)
struct BossHPGauge_C_SetLv final
{
public:
	int32                                         Lv;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FC8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(BossHPGauge_C_SetLv) == 0x000008, "Wrong alignment on BossHPGauge_C_SetLv");
static_assert(sizeof(BossHPGauge_C_SetLv) == 0x000050, "Wrong size on BossHPGauge_C_SetLv");
static_assert(offsetof(BossHPGauge_C_SetLv, Lv) == 0x000000, "Member 'BossHPGauge_C_SetLv::Lv' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetLv, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'BossHPGauge_C_SetLv::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetLv, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'BossHPGauge_C_SetLv::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetLv, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BossHPGauge_C_SetLv::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetLv, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'BossHPGauge_C_SetLv::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetName
// 0x0028 (0x0028 - 0x0000)
struct BossHPGauge_C_SetName final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(BossHPGauge_C_SetName) == 0x000008, "Wrong alignment on BossHPGauge_C_SetName");
static_assert(sizeof(BossHPGauge_C_SetName) == 0x000028, "Wrong size on BossHPGauge_C_SetName");
static_assert(offsetof(BossHPGauge_C_SetName, Param_Name) == 0x000000, "Member 'BossHPGauge_C_SetName::Param_Name' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'BossHPGauge_C_SetName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetColorText
// 0x0040 (0x0040 - 0x0000)
struct BossHPGauge_C_SetColorText final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColorIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_4;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BossHPGauge_C_SetColorText) == 0x000008, "Wrong alignment on BossHPGauge_C_SetColorText");
static_assert(sizeof(BossHPGauge_C_SetColorText) == 0x000040, "Wrong size on BossHPGauge_C_SetColorText");
static_assert(offsetof(BossHPGauge_C_SetColorText, Level) == 0x000000, "Member 'BossHPGauge_C_SetColorText::Level' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, ColorIndex) == 0x000004, "Member 'BossHPGauge_C_SetColorText::ColorIndex' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_GetClassLevel_ReturnValue) == 0x000008, "Member 'BossHPGauge_C_SetColorText::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BossHPGauge_C_SetColorText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'BossHPGauge_C_SetColorText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'BossHPGauge_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000039, "Member 'BossHPGauge_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00003A, "Member 'BossHPGauge_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x00003B, "Member 'BossHPGauge_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_SetColorText, CallFunc_GreaterEqual_IntInt_ReturnValue_4) == 0x00003C, "Member 'BossHPGauge_C_SetColorText::CallFunc_GreaterEqual_IntInt_ReturnValue_4' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetColorLV
// 0x0028 (0x0028 - 0x0000)
struct BossHPGauge_C_SetColorLV final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BossHPGauge_C_SetColorLV) == 0x000008, "Wrong alignment on BossHPGauge_C_SetColorLV");
static_assert(sizeof(BossHPGauge_C_SetColorLV) == 0x000028, "Wrong size on BossHPGauge_C_SetColorLV");
static_assert(offsetof(BossHPGauge_C_SetColorLV, InColorAndOpacity) == 0x000000, "Member 'BossHPGauge_C_SetColorLV::InColorAndOpacity' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.SetColorName
// 0x0028 (0x0028 - 0x0000)
struct BossHPGauge_C_SetColorName final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BossHPGauge_C_SetColorName) == 0x000008, "Wrong alignment on BossHPGauge_C_SetColorName");
static_assert(sizeof(BossHPGauge_C_SetColorName) == 0x000028, "Wrong size on BossHPGauge_C_SetColorName");
static_assert(offsetof(BossHPGauge_C_SetColorName, InColorAndOpacity) == 0x000000, "Member 'BossHPGauge_C_SetColorName::InColorAndOpacity' has a wrong offset!");

// Function BossHPGauge.BossHPGauge_C.OnSetBossCharacter
// 0x0010 (0x0010 - 0x0000)
struct BossHPGauge_C_OnSetBossCharacter final
{
public:
	class ASBEnemyCharacter*                      InBoss;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEnemyLevel_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BossHPGauge_C_OnSetBossCharacter) == 0x000008, "Wrong alignment on BossHPGauge_C_OnSetBossCharacter");
static_assert(sizeof(BossHPGauge_C_OnSetBossCharacter) == 0x000010, "Wrong size on BossHPGauge_C_OnSetBossCharacter");
static_assert(offsetof(BossHPGauge_C_OnSetBossCharacter, InBoss) == 0x000000, "Member 'BossHPGauge_C_OnSetBossCharacter::InBoss' has a wrong offset!");
static_assert(offsetof(BossHPGauge_C_OnSetBossCharacter, CallFunc_GetEnemyLevel_ReturnValue) == 0x000008, "Member 'BossHPGauge_C_OnSetBossCharacter::CallFunc_GetEnemyLevel_ReturnValue' has a wrong offset!");

}

