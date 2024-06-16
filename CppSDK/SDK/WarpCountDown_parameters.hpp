#pragma once

 

// Package: WarpCountDown

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WarpCountDown.WarpCountDown_C.ExecuteUbergraph_WarpCountDown
// 0x0250 (0x0250 - 0x0000)
struct WarpCountDown_C_ExecuteUbergraph_WarpCountDown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45AA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45AB[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AC[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45AD[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45AE[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0148(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0158(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0170(0x0018)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45AF[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bPress;                         // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B0[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B1[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B2[0x2];                                     // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45B3[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B4[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x01F8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B5[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bPress)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bPress)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x023C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown) == 0x000008, "Wrong alignment on WarpCountDown_C_ExecuteUbergraph_WarpCountDown");
static_assert(sizeof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown) == 0x000250, "Wrong size on WarpCountDown_C_ExecuteUbergraph_WarpCountDown");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, EntryPoint) == 0x000000, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::EntryPoint' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_Event_MyGeometry) == 0x000004, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetConfigSaveManager_IsValid) == 0x000040, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000048, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetOperateMode_ReturnValue) == 0x000050, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000051, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000058, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_SelectInt_ReturnValue) == 0x000068, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetTextFromAsset_ReturnValue) == 0x000070, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_FindSubstring_ReturnValue) == 0x000080, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_MakeArray_Array) == 0x000088, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_JoinStringArray_ReturnValue) == 0x0000A0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_MakeLiteralText_ReturnValue) == 0x0000C8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_MakeStruct_FormatArgumentData) == 0x0000F8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000138, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_MakeArray_Array_1) == 0x000148, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_Format_ReturnValue) == 0x000158, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000170, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000188, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000190, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0001A0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_CustomEvent_bPress) == 0x0001A9, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_CustomEvent_bPress' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0001B0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x0001C0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0001C9, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001CC, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_FClamp_ReturnValue) == 0x0001D0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x0001D8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x0001E0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_PlayAnimation_ReturnValue) == 0x0001F0, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_Event_Animation) == 0x0001F8, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_PlayAnimation_ReturnValue_1) == 0x000200, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000208, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_CreateDelegate_OutputDelegate) == 0x00020C, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_CreateDelegate_OutputDelegate_1) == 0x00021C, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_CreateDelegate_OutputDelegate_2) == 0x00022C, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_ExecuteUbergraph_WarpCountDown, K2Node_CreateDelegate_OutputDelegate_3) == 0x00023C, "Member 'WarpCountDown_C_ExecuteUbergraph_WarpCountDown::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function WarpCountDown.WarpCountDown_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WarpCountDown_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WarpCountDown_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WarpCountDown_C_OnAnimationFinished");
static_assert(sizeof(WarpCountDown_C_OnAnimationFinished) == 0x000008, "Wrong size on WarpCountDown_C_OnAnimationFinished");
static_assert(offsetof(WarpCountDown_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WarpCountDown_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WarpCountDown.WarpCountDown_C.OnCountdownInteractionDelegate_����
// 0x0001 (0x0001 - 0x0000)
struct WarpCountDown_C_OnCountdownInteractionDelegate_____ final
{
public:
	bool                                          bPress;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WarpCountDown_C_OnCountdownInteractionDelegate_____) == 0x000001, "Wrong alignment on WarpCountDown_C_OnCountdownInteractionDelegate_____");
static_assert(sizeof(WarpCountDown_C_OnCountdownInteractionDelegate_____) == 0x000001, "Wrong size on WarpCountDown_C_OnCountdownInteractionDelegate_____");
static_assert(offsetof(WarpCountDown_C_OnCountdownInteractionDelegate_____, bPress) == 0x000000, "Member 'WarpCountDown_C_OnCountdownInteractionDelegate_____::bPress' has a wrong offset!");

// Function WarpCountDown.WarpCountDown_C.Tick
// 0x003C (0x003C - 0x0000)
struct WarpCountDown_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WarpCountDown_C_Tick) == 0x000004, "Wrong alignment on WarpCountDown_C_Tick");
static_assert(sizeof(WarpCountDown_C_Tick) == 0x00003C, "Wrong size on WarpCountDown_C_Tick");
static_assert(offsetof(WarpCountDown_C_Tick, MyGeometry) == 0x000000, "Member 'WarpCountDown_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_Tick, InDeltaTime) == 0x000038, "Member 'WarpCountDown_C_Tick::InDeltaTime' has a wrong offset!");

// Function WarpCountDown.WarpCountDown_C.SetRemainCount
// 0x0014 (0x0014 - 0x0000)
struct WarpCountDown_C_SetRemainCount final
{
public:
	float                                         InRemainCount;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B6[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WarpCountDown_C_SetRemainCount) == 0x000004, "Wrong alignment on WarpCountDown_C_SetRemainCount");
static_assert(sizeof(WarpCountDown_C_SetRemainCount) == 0x000014, "Wrong size on WarpCountDown_C_SetRemainCount");
static_assert(offsetof(WarpCountDown_C_SetRemainCount, InRemainCount) == 0x000000, "Member 'WarpCountDown_C_SetRemainCount::InRemainCount' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetRemainCount, CallFunc_FCeil_ReturnValue) == 0x000004, "Member 'WarpCountDown_C_SetRemainCount::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetRemainCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WarpCountDown_C_SetRemainCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetRemainCount, CallFunc_PlaySE_ReturnValue) == 0x00000C, "Member 'WarpCountDown_C_SetRemainCount::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetRemainCount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'WarpCountDown_C_SetRemainCount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WarpCountDown.WarpCountDown_C.UpdateInteractGauge
// 0x0010 (0x0010 - 0x0000)
struct WarpCountDown_C_UpdateInteractGauge final
{
public:
	float                                         TmpGaugeValue;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WarpCountDown_C_UpdateInteractGauge) == 0x000004, "Wrong alignment on WarpCountDown_C_UpdateInteractGauge");
static_assert(sizeof(WarpCountDown_C_UpdateInteractGauge) == 0x000010, "Wrong size on WarpCountDown_C_UpdateInteractGauge");
static_assert(offsetof(WarpCountDown_C_UpdateInteractGauge, TmpGaugeValue) == 0x000000, "Member 'WarpCountDown_C_UpdateInteractGauge::TmpGaugeValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_UpdateInteractGauge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WarpCountDown_C_UpdateInteractGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_UpdateInteractGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'WarpCountDown_C_UpdateInteractGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_UpdateInteractGauge, CallFunc_FClamp_ReturnValue) == 0x00000C, "Member 'WarpCountDown_C_UpdateInteractGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function WarpCountDown.WarpCountDown_C.SetInputBlock
// 0x0048 (0x0048 - 0x0000)
struct WarpCountDown_C_SetInputBlock final
{
public:
	bool                                          IsInputBlock;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           TmpActionNames;                                    // 0x0008(0x0010)(Edit, BlueprintVisible)
	bool                                          TmpInputActiveFlag;                                // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45B9[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45BA[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
};
static_assert(alignof(WarpCountDown_C_SetInputBlock) == 0x000008, "Wrong alignment on WarpCountDown_C_SetInputBlock");
static_assert(sizeof(WarpCountDown_C_SetInputBlock) == 0x000048, "Wrong size on WarpCountDown_C_SetInputBlock");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, IsInputBlock) == 0x000000, "Member 'WarpCountDown_C_SetInputBlock::IsInputBlock' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, TmpActionNames) == 0x000008, "Member 'WarpCountDown_C_SetInputBlock::TmpActionNames' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, TmpInputActiveFlag) == 0x000018, "Member 'WarpCountDown_C_SetInputBlock::TmpInputActiveFlag' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'WarpCountDown_C_SetInputBlock::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'WarpCountDown_C_SetInputBlock::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WarpCountDown_C_SetInputBlock::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, CallFunc_Array_Get_Item) == 0x000024, "Member 'WarpCountDown_C_SetInputBlock::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'WarpCountDown_C_SetInputBlock::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WarpCountDown_C_SetInputBlock::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WarpCountDown_C_SetInputBlock::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WarpCountDown_C_SetInputBlock, K2Node_MakeArray_Array) == 0x000038, "Member 'WarpCountDown_C_SetInputBlock::K2Node_MakeArray_Array' has a wrong offset!");

}

