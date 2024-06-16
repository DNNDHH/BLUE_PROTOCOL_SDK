#pragma once

 

// Package: StampWidget

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StampWidget.StampWidget_C.ExecuteUbergraph_StampWidget
// 0x00D0 (0x00D0 - 0x0000)
struct StampWidget_C_ExecuteUbergraph_StampWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F6D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_StampId;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_StampSize;                      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F6F[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampData                           CallFunc_FindStampData_Data;                       // 0x0038(0x0088)()
	bool                                          CallFunc_FindStampData_ReturnValue;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F70[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampWidget_C_ExecuteUbergraph_StampWidget) == 0x000008, "Wrong alignment on StampWidget_C_ExecuteUbergraph_StampWidget");
static_assert(sizeof(StampWidget_C_ExecuteUbergraph_StampWidget) == 0x0000D0, "Wrong size on StampWidget_C_ExecuteUbergraph_StampWidget");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, EntryPoint) == 0x000000, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, Temp_object_Variable) == 0x000008, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000020, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, K2Node_CustomEvent_StampId) == 0x00002C, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::K2Node_CustomEvent_StampId' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, K2Node_CustomEvent_StampSize) == 0x000030, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::K2Node_CustomEvent_StampSize' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, CallFunc_FindStampData_Data) == 0x000038, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::CallFunc_FindStampData_Data' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, CallFunc_FindStampData_ReturnValue) == 0x0000C0, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::CallFunc_FindStampData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C1, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_ExecuteUbergraph_StampWidget, K2Node_CustomEvent_Loaded) == 0x0000C8, "Member 'StampWidget_C_ExecuteUbergraph_StampWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");

// Function StampWidget.StampWidget_C.SetStamp
// 0x0008 (0x0008 - 0x0000)
struct StampWidget_C_SetStamp final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StampSize;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampWidget_C_SetStamp) == 0x000004, "Wrong alignment on StampWidget_C_SetStamp");
static_assert(sizeof(StampWidget_C_SetStamp) == 0x000008, "Wrong size on StampWidget_C_SetStamp");
static_assert(offsetof(StampWidget_C_SetStamp, StampId) == 0x000000, "Member 'StampWidget_C_SetStamp::StampId' has a wrong offset!");
static_assert(offsetof(StampWidget_C_SetStamp, StampSize) == 0x000004, "Member 'StampWidget_C_SetStamp::StampSize' has a wrong offset!");

// Function StampWidget.StampWidget_C.OnLoaded_C6C1A4DA493A48B31FADE282B44EF873
// 0x0008 (0x0008 - 0x0000)
struct StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873) == 0x000008, "Wrong alignment on StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873");
static_assert(sizeof(StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873) == 0x000008, "Wrong size on StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873");
static_assert(offsetof(StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873, Loaded) == 0x000000, "Member 'StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873::Loaded' has a wrong offset!");

// Function StampWidget.StampWidget_C.PlayStampVoice
// 0x0198 (0x0198 - 0x0000)
struct StampWidget_C_PlayStampVoice final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F71[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             AttachCharacter;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F72[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetVoiceId_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  K2Node_DynamicCast_AsSBOnline_Player_State;        // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F73[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBStampData                           CallFunc_FindStampData_Data;                       // 0x0070(0x0088)()
	bool                                          CallFunc_FindStampData_ReturnValue;                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F74[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F75[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event;               // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F76[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlayVoice_ReturnValue;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F77[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(StampWidget_C_PlayStampVoice) == 0x000008, "Wrong alignment on StampWidget_C_PlayStampVoice");
static_assert(sizeof(StampWidget_C_PlayStampVoice) == 0x000198, "Wrong size on StampWidget_C_PlayStampVoice");
static_assert(offsetof(StampWidget_C_PlayStampVoice, StampId) == 0x000000, "Member 'StampWidget_C_PlayStampVoice::StampId' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, AttachCharacter) == 0x000008, "Member 'StampWidget_C_PlayStampVoice::AttachCharacter' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, Temp_string_Variable) == 0x000010, "Member 'StampWidget_C_PlayStampVoice::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'StampWidget_C_PlayStampVoice::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'StampWidget_C_PlayStampVoice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_GetVoiceId_ReturnValue) == 0x00002C, "Member 'StampWidget_C_PlayStampVoice::CallFunc_GetVoiceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_GetValidPlayerState_ReturnValue) == 0x000030, "Member 'StampWidget_C_PlayStampVoice::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, K2Node_DynamicCast_AsSBOnline_Player_State) == 0x000048, "Member 'StampWidget_C_PlayStampVoice::K2Node_DynamicCast_AsSBOnline_Player_State' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'StampWidget_C_PlayStampVoice::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'StampWidget_C_PlayStampVoice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_GetCharacterName_ReturnValue) == 0x000060, "Member 'StampWidget_C_PlayStampVoice::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_FindStampData_Data) == 0x000070, "Member 'StampWidget_C_PlayStampVoice::CallFunc_FindStampData_Data' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_FindStampData_ReturnValue) == 0x0000F8, "Member 'StampWidget_C_PlayStampVoice::CallFunc_FindStampData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000100, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000108, "Member 'StampWidget_C_PlayStampVoice::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, K2Node_DynamicCast_AsAk_Audio_Event) == 0x000110, "Member 'StampWidget_C_PlayStampVoice::K2Node_DynamicCast_AsAk_Audio_Event' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, K2Node_DynamicCast_bSuccess_2) == 0x000118, "Member 'StampWidget_C_PlayStampVoice::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_GetDisplayName_ReturnValue) == 0x000120, "Member 'StampWidget_C_PlayStampVoice::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_PlayVoice_ReturnValue) == 0x000130, "Member 'StampWidget_C_PlayStampVoice::CallFunc_PlayVoice_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Concat_StrStr_ReturnValue) == 0x000138, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000148, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000158, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000168, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000178, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StampWidget_C_PlayStampVoice, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000188, "Member 'StampWidget_C_PlayStampVoice::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");

}

