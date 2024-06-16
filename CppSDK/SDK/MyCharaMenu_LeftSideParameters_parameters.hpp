#pragma once

 

// Package: MyCharaMenu_LeftSideParameters

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnClicked_AchievementChangeButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementListRef;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature, InAchievementListRef) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature::InAchievementListRef' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievement__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_LeftSideParameters
// 0x01A8 (0x01A8 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InAchievementId)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_InResult;                       // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE0[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InAchievementId;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x002D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool InResult)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetAchievementId_ReturnValue;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EE1[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ScbPopup_C*                        CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE2[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& PlayerName)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_PlayerName;                     // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE3[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_1; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE4[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InPrevLevel, int32 InCurLevel, struct FSBExtraExpParse& InExtraExpParse)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE5[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue_1;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE6[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE7[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EE8[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7EE9[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AchievementList_C*         CallFunc_Create_ReturnValue_1;                     // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EEA[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0144(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0156(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsScbPopupEnable_ReturnValue;             // 0x0157(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 InPrevLevel, int32 InCurLevel, struct FSBExtraExpParse& InExtraExpParse)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InPrevLevel;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InCurLevel;                     // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExtraExpParse                       K2Node_CustomEvent_InExtraExpParse;                // 0x0170(0x0018)(ConstParm, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EEB[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EEC[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters) == 0x0001A8, "Wrong size on MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, EntryPoint) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_InResult) == 0x000024, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_InResult' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_InAchievementId) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_InAchievementId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_Result) == 0x00002D, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_Not_PreBool_ReturnValue) == 0x00002E, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002F, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_3) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetAchievementId_ReturnValue) == 0x000050, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetAchievementId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_Create_ReturnValue) == 0x000058, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_4) == 0x000060, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetSBPlayerController_ReturnValue) == 0x000070, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_RetCode) == 0x000078, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00007C, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_5) == 0x000080, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_PlayerName) == 0x000090, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_PlayerName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000A0, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0000A8, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetPlayerAchievementComponent_ReturnValue_1) == 0x0000C0, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetPlayerAchievementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_3) == 0x0000C9, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetCharacterData_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000D8, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_4) == 0x0000E8, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetCharacterData_ReturnValue_1) == 0x0000F0, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetCharacterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_5) == 0x0000F8, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000FC, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_Event_IsDesignTime) == 0x00010C, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000110, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_6) == 0x000118, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_8) == 0x00011C, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000130, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_Create_ReturnValue_1) == 0x000138, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsValid_ReturnValue_7) == 0x000140, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_9) == 0x000144, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_Not_PreBool_ReturnValue_1) == 0x000154, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_Not_PreBool_ReturnValue_2) == 0x000155, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_Not_PreBool_ReturnValue_3) == 0x000156, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_IsScbPopupEnable_ReturnValue) == 0x000157, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_IsScbPopupEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CreateDelegate_OutputDelegate_10) == 0x000158, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_InPrevLevel) == 0x000168, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_InPrevLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_InCurLevel) == 0x00016C, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_InCurLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, K2Node_CustomEvent_InExtraExpParse) == 0x000170, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::K2Node_CustomEvent_InExtraExpParse' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetUIManager_IsValid) == 0x000188, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetUIManager_ReturnValue) == 0x000190, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetUIManager_IsValid_1) == 0x000198, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters, CallFunc_GetUIManager_ReturnValue_1) == 0x0001A0, "Member 'MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLevelUpDelegate
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate final
{
public:
	int32                                         InPrevLevel;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InCurLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExtraExpParse                       InExtraExpParse;                                   // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate) == 0x000004, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate) == 0x000020, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate, InPrevLevel) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate::InPrevLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate, InCurLevel) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate::InCurLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate, InExtraExpParse) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate::InExtraExpParse' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_LeftSideParameters_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.�������_0
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C__________0 final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C__________0) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C__________0");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C__________0) == 0x000010, "Wrong size on MyCharaMenu_LeftSideParameters_C__________0");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C__________0, PlayerName) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C__________0::PlayerName' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnRenamed
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnRenamed final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnRenamed) == 0x000004, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnRenamed");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnRenamed) == 0x000004, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnRenamed");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnRenamed, RetCode) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnRenamed::RetCode' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievementSelectedDelegate_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____) == 0x000001, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____, Result) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____::Result' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSelectAchievement_����
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____ final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____) == 0x000004, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____) == 0x000004, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____, InAchievementId) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____::InAchievementId' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____ final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____) == 0x000001, "Wrong size on MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____, InResult) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____::InResult' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementName
// 0x00C0 (0x00C0 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetAchievementName final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalAchievementId;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EED[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EEE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0020(0x0078)()
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetAchievementName) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetAchievementName");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetAchievementName) == 0x0000C0, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetAchievementName");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, InAchievementId) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::InAchievementId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, LocalAchievementId) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::LocalAchievementId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_GetMasterDataManager_IsValid) == 0x000009, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_GetAchievementMasterData_IsExists) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_GetAchievementName_ReturnValue) == 0x000098, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementName, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupNameGrp
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetupNameGrp final
{
public:
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EEF[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetupNameGrp");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp) == 0x000050, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetupNameGrp");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_GetValidPlayerState_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_GetCharacterName_self_CastInput) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_GetCharacterName_ReturnValue) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupNameGrp, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'MyCharaMenu_LeftSideParameters_C_SetupNameGrp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupClassGrp
// 0x0070 (0x0070 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetupClassGrp final
{
public:
	ESBClassType                                  LocalClassType;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCounterStopClassLevel_ReturnValue;     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelLimit_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isClassLevelLimit_ReturnValue;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClassLevelCounterStop_ReturnValue;      // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBScbClassData                        CallFunc_GetScbClassData_ReturnValue;              // 0x0010(0x0024)(NoDestructor)
	uint8                                         Pad_7EF1[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF2[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetupClassGrp");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp) == 0x000070, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetupClassGrp");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, LocalClassType) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::LocalClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetCounterStopClassLevel_ReturnValue) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetCounterStopClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetLevelLimit_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetLevelLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_isClassLevelLimit_ReturnValue) == 0x00000D, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_isClassLevelLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_IsClassLevelCounterStop_ReturnValue) == 0x00000E, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_IsClassLevelCounterStop_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetClassType_ReturnValue) == 0x00000F, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetScbClassData_ReturnValue) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetScbClassData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetClassNameText_ReturnValue) == 0x000038, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetClassLevel_ReturnValue) == 0x000048, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_GetPlayerClassType_ClassType) == 0x000068, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupClassGrp, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'MyCharaMenu_LeftSideParameters_C_SetupClassGrp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetPlayerLevel
// 0x0030 (0x0030 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetPlayerLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetPlayerLevel) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetPlayerLevel");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetPlayerLevel) == 0x000030, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetPlayerLevel");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetPlayerLevel, InLevel) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetPlayerLevel::InLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetPlayerLevel, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetPlayerLevel::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetPlayerLevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_SetPlayerLevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetTotalPower
// 0x0030 (0x0030 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetTotalPower final
{
public:
	int32                                         InTotalPower;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetTotalPower) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetTotalPower");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetTotalPower) == 0x000030, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetTotalPower");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetTotalPower, InTotalPower) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetTotalPower::InTotalPower' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetTotalPower, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetTotalPower::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetTotalPower, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_SetTotalPower::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupStatusGrp
// 0x0228 (0x0228 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetupStatusGrp final
{
public:
	struct FSBCharacterStatus                     Status;                                            // 0x0000(0x0040)(Edit, BlueprintVisible, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EF5[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_4;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_5;           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0110(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0128(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_6;           // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_7;           // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0160(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0178(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_8;           // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_9;           // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x01B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x01C8(0x0018)()
	struct FSBCharacterStatus                     CallFunc_GetOriginalStatus_ReturnValue;            // 0x01E0(0x0040)(ConstParm, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF6[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue; // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetupStatusGrp");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp) == 0x000228, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetupStatusGrp");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, Status) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::Status' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000078, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000088, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B0, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0000C8, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000D8, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_4) == 0x0000F0, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_5) == 0x000100, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000110, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000128, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_6) == 0x000140, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_7) == 0x000150, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000160, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000178, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_8) == 0x000190, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_IntToString_ReturnValue_9) == 0x0001A0, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_IntToString_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0001B0, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_Conv_StringToText_ReturnValue_9) == 0x0001C8, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_GetOriginalStatus_ReturnValue) == 0x0001E0, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_GetOriginalStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x000220, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupStatusGrp, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue) == 0x000224, "Member 'MyCharaMenu_LeftSideParameters_C_SetupStatusGrp::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMark
// 0x03E0 (0x03E0 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EF7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InCurrEquipmentUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNewEquipmentUniqueId;                            // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBCharaEquipType                             InEquipType;                                       // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalNewEquipClassType;                            // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF8[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalIndex;                                        // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharaEquipItemInfo>            LocalNewEquipItemInfoList;                         // 0x0030(0x0010)(Edit, BlueprintVisible)
	struct FCharaEquipItemInfo                    LocalNewEquipItemInfo;                             // 0x0040(0x0028)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           LocalNewEquipOwnItemInfo;                          // 0x0068(0x0118)(Edit, BlueprintVisible)
	int32                                         LocalLevelSyncTargetForNewEquip;                   // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevelSyncTargetForCurrEquip;                  // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipInfo                        LocalNewEquipInfo;                                 // 0x0190(0x0010)(Edit, BlueprintVisible)
	class FString                                 TmpNewEquipmentUniqueId;                           // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpCurrEquipmentUniqueId;                          // 0x01B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         TmpDiffValue;                                      // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EF9[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_StatusUpDown_C*            TmpStatusUpDown;                                   // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpTotalPowerDiff;                                 // 0x01D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EFA[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UMyCharaMenu_StatusUpDown_C*, int32> TmpDiffValueMap;                                   // 0x01D8(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         TmpNewMaxHp;                                       // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterStatus                     TmpNewEquipStatus;                                 // 0x022C(0x0040)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x027A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindEquipItemInfo_ReturnValue;            // 0x027B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrLevelSyncTarget_OutLevelSyncTarget; // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EFB[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTargetByUniqueId_OutLevelSyncTarget; // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetLevelSyncTargetByUniqueId_OutClassType; // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EFC[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMyCharaMenu_StatusUpDown_C*>    CallFunc_Map_Keys_Keys;                            // 0x0290(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_GetTotalPowerByCharaEquipInfo_ReturnValue; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EFD[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_StatusUpDown_C*            CallFunc_Array_Get_Item;                           // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EFE[0x2];                                     // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item_1;                         // 0x02B8(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EFF[0x2];                                     // 0x02E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue;                 // 0x02E8(0x0010)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F00[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_SetFieldsInStruct_StructOut;                // 0x0300(0x0028)()
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue; // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipStatusDiff_OutIsVallid;           // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F01[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterStatus                     CallFunc_GetEquipStatusDiff_OutNewEquipmentStatus; // 0x0334(0x0040)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0375(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0376(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F02[0x1];                                     // 0x0377(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Values_Values;                        // 0x0378(0x0010)(ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F03[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UMyCharaMenu_StatusUpDown_C*, int32> K2Node_MakeMap_Map;                                // 0x0390(0x0050)(ContainsInstancedReference)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark) == 0x0003E0, "Wrong size on MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, InIsVisible) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, InCurrEquipmentUniqueId) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::InCurrEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, InNewEquipmentUniqueId) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::InNewEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, InEquipType) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::InEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalNewEquipClassType) == 0x000029, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalNewEquipClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalEquipType) == 0x00002A, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalIndex) == 0x00002C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalNewEquipItemInfoList) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalNewEquipItemInfoList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalNewEquipItemInfo) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalNewEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalNewEquipOwnItemInfo) == 0x000068, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalNewEquipOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalLevelSyncTargetForNewEquip) == 0x000180, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalLevelSyncTargetForNewEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalLevelSyncTargetForCurrEquip) == 0x000184, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalLevelSyncTargetForCurrEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalSBPlayerCharacter) == 0x000188, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, LocalNewEquipInfo) == 0x000190, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::LocalNewEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpNewEquipmentUniqueId) == 0x0001A0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpNewEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpCurrEquipmentUniqueId) == 0x0001B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpCurrEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpDiffValue) == 0x0001C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpDiffValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpStatusUpDown) == 0x0001C8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpStatusUpDown' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpTotalPowerDiff) == 0x0001D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpTotalPowerDiff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpDiffValueMap) == 0x0001D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpDiffValueMap' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpNewMaxHp) == 0x000228, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpNewMaxHp' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, TmpNewEquipStatus) == 0x00022C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::TmpNewEquipStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, Temp_int_Loop_Counter_Variable) == 0x00026C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Add_IntInt_ReturnValue) == 0x000270, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, Temp_int_Array_Index_Variable) == 0x000274, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetClassType_ReturnValue) == 0x000278, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000279, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00027A, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_FindEquipItemInfo_ReturnValue) == 0x00027B, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_FindEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetCurrLevelSyncTarget_OutLevelSyncTarget) == 0x00027C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetCurrLevelSyncTarget_OutLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, K2Node_SwitchEnum_CmpSuccess) == 0x000280, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetLevelSyncTargetByUniqueId_OutLevelSyncTarget) == 0x000284, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetLevelSyncTargetByUniqueId_OutLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetLevelSyncTargetByUniqueId_OutClassType) == 0x000288, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetLevelSyncTargetByUniqueId_OutClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00028C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Map_Keys_Keys) == 0x000290, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetTotalPowerByCharaEquipInfo_ReturnValue) == 0x0002A0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetTotalPowerByCharaEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Array_Get_Item) == 0x0002A8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Array_Length_ReturnValue) == 0x0002B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_IsValid_ReturnValue) == 0x0002B4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Less_IntInt_ReturnValue) == 0x0002B5, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Array_Get_Item_1) == 0x0002B8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Array_Length_ReturnValue_1) == 0x0002E0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002E4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002E5, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetEquipInfo_ReturnValue) == 0x0002E8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_BooleanAND_ReturnValue) == 0x0002F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, K2Node_SetFieldsInStruct_StructOut) == 0x000300, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue) == 0x000328, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Subtract_IntInt_ReturnValue) == 0x00032C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetEquipStatusDiff_OutIsVallid) == 0x000330, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetEquipStatusDiff_OutIsVallid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_GetEquipStatusDiff_OutNewEquipmentStatus) == 0x000334, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_GetEquipStatusDiff_OutNewEquipmentStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000374, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000375, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_BooleanOR_ReturnValue) == 0x000376, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Map_Values_Values) == 0x000378, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000388, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark, K2Node_MakeMap_Map) == 0x000390, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark::K2Node_MakeMap_Map' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetStatusDiffMarkInBulk
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk final
{
public:
	int32                                         InDiff;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk) == 0x000004, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk) == 0x000008, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk, InDiff) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk::InDiff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipStatusDiff
// 0x00F8 (0x00F8 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff final
{
public:
	class FString                                 InCurrEquipmentUniqueId;                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNewEquipmentUniqueId;                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          OutIsVallid;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F04[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterStatus                     OutNewEquipmentStatus;                             // 0x0024(0x0040)(Parm, OutParm, NoDestructor)
	uint8                                         Pad_7F05[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F06[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterStatus                     CallFunc_GetEquipStatusDiff_ReturnValue;           // 0x0074(0x0040)(NoDestructor)
	struct FSBCharacterStatus                     K2Node_MakeStruct_SBCharacterStatus;               // 0x00B4(0x0040)(NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff) == 0x0000F8, "Wrong size on MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, InCurrEquipmentUniqueId) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::InCurrEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, InNewEquipmentUniqueId) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::InNewEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, OutIsVallid) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::OutIsVallid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, OutNewEquipmentStatus) == 0x000024, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::OutNewEquipmentStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000068, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, CallFunc_GetEquipStatusDiff_ReturnValue) == 0x000074, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::CallFunc_GetEquipStatusDiff_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff, K2Node_MakeStruct_SBCharacterStatus) == 0x0000B4, "Member 'MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff::K2Node_MakeStruct_SBCharacterStatus' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.DestroyAchievementList
// 0x0070 (0x0070 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_DestroyAchievementList final
{
public:
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F07[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F08[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InAchievementId)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7F09[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F0A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool InResult)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_DestroyAchievementList");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList) == 0x000070, "Wrong size on MyCharaMenu_LeftSideParameters_C_DestroyAchievementList");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, K2Node_CreateDelegate_OutputDelegate_2) == 0x00004C, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_DestroyAchievementList, K2Node_CreateDelegate_OutputDelegate_3) == 0x00005C, "Member 'MyCharaMenu_LeftSideParameters_C_DestroyAchievementList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMarkBattleSet
// 0x02F8 (0x02F8 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F0B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPresetEquipItem>       InPresetEquipItemList;                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBPlayerPresetEquipItem                      LocalPresetEquipItemForLoop;                       // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalNewEquipClassType;                            // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F0C[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalLevelSyncTargetForNewEquip;                   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevelSyncTargetForCurrEquip;                  // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F0D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipInfo                        LocalEquipInfo;                                    // 0x0030(0x0010)(Edit, BlueprintVisible)
	bool                                          LocalEquipFlag;                                    // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F0E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalItemId;                                       // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalIndex;                                        // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharaEquipItemInfo>            LocalEquipInfoItems;                               // 0x0060(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerPresetEquipItem>       LocalPresetEquipItemList;                          // 0x0070(0x0010)(Edit, BlueprintVisible)
	float                                         LocalDiffValue;                                    // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F0F[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_StatusUpDown_C*            LocalStatusUpDown;                                 // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UMyCharaMenu_StatusUpDown_C*, int32> LocalDiffValueMap;                                 // 0x0090(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         LocalTotalPowerDiff;                               // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterStatus                     LocalNewEquipStatus;                               // 0x00E4(0x0040)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrLevelSyncTarget_OutLevelSyncTarget; // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F10[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTargetByUniqueId_OutLevelSyncTarget; // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetLevelSyncTargetByUniqueId_OutClassType; // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F11[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerByCharaEquipInfo_ReturnValue; // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F12[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMyCharaMenu_StatusUpDown_C*>    CallFunc_Map_Keys_Keys;                            // 0x0160(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F13[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_StatusUpDown_C*            CallFunc_Array_Get_Item;                           // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0187(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0188(0x0028)(ConstParm)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F14[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F15[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo;              // 0x01C8(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F16[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F17[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipItem               CallFunc_Array_Get_Item_1;                         // 0x0200(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F18[0x2];                                     // 0x022E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_6;             // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F19[0x2];                                     // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F1A[0x2];                                     // 0x0242(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterStatus                     CallFunc_GetEquipStatusDiffBattleSet_ReturnValue;  // 0x0244(0x0040)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F1B[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_7;             // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F1C[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Values_Values;                        // 0x0290(0x0010)(ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F1D[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UMyCharaMenu_StatusUpDown_C*, int32> K2Node_MakeMap_Map;                                // 0x02A8(0x0050)(ContainsInstancedReference)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet) == 0x0002F8, "Wrong size on MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, InIsVisible) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, InPresetEquipItemList) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::InPresetEquipItemList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalPresetEquipItemForLoop) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalPresetEquipItemForLoop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalNewEquipClassType) == 0x000019, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalNewEquipClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalLevelSyncTargetForNewEquip) == 0x00001C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalLevelSyncTargetForNewEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalLevelSyncTargetForCurrEquip) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalLevelSyncTargetForCurrEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalSBPlayerCharacter) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalEquipInfo) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalEquipFlag) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalEquipFlag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalUniqueId) == 0x000048, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalItemId) == 0x000058, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalItemId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalIndex) == 0x00005C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalEquipInfoItems) == 0x000060, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalEquipInfoItems' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalPresetEquipItemList) == 0x000070, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalPresetEquipItemList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalDiffValue) == 0x000080, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalDiffValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalStatusUpDown) == 0x000088, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalStatusUpDown' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalDiffValueMap) == 0x000090, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalDiffValueMap' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalTotalPowerDiff) == 0x0000E0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalTotalPowerDiff' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, LocalNewEquipStatus) == 0x0000E4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::LocalNewEquipStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, Temp_int_Loop_Counter_Variable) == 0x000124, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Add_IntInt_ReturnValue) == 0x000128, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, Temp_int_Array_Index_Variable) == 0x00012C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, Temp_int_Array_Index_Variable_1) == 0x000130, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_IntToByte_ReturnValue) == 0x000134, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetValidValue_ReturnValue) == 0x000135, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetClassType_ReturnValue) == 0x000136, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000137, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, Temp_int_Loop_Counter_Variable_1) == 0x000138, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Add_IntInt_ReturnValue_1) == 0x00013C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetCurrLevelSyncTarget_OutLevelSyncTarget) == 0x000140, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetCurrLevelSyncTarget_OutLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, K2Node_SwitchEnum_CmpSuccess) == 0x000144, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetLevelSyncTargetByUniqueId_OutLevelSyncTarget) == 0x000148, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetLevelSyncTargetByUniqueId_OutLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetLevelSyncTargetByUniqueId_OutClassType) == 0x00014C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetLevelSyncTargetByUniqueId_OutClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue) == 0x000150, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetTotalPowerByCharaEquipInfo_ReturnValue) == 0x000154, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetTotalPowerByCharaEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Subtract_IntInt_ReturnValue) == 0x000158, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Map_Keys_Keys) == 0x000160, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralInt_ReturnValue) == 0x000170, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Array_Get_Item) == 0x000178, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_IsValid_ReturnValue) == 0x000184, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Less_IntInt_ReturnValue) == 0x000185, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue) == 0x000186, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000187, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000188, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0001B4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001B8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001B9, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x0001BC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x0001C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001C4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, K2Node_MakeStruct_CharaEquipItemInfo) == 0x0001C8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::K2Node_MakeStruct_CharaEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0001F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x0001F4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0001F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_5) == 0x0001FC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Array_Get_Item_1) == 0x000200, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Array_Length_ReturnValue_1) == 0x000228, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Less_IntInt_ReturnValue_1) == 0x00022C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x00022D, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_6) == 0x000230, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000234, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000235, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000238, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_BooleanOR_ReturnValue) == 0x000240, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000241, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_GetEquipStatusDiffBattleSet_ReturnValue) == 0x000244, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_GetEquipStatusDiffBattleSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000284, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_ByteToInt_ReturnValue_7) == 0x000288, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_ByteToInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Map_Values_Values) == 0x000290, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0002A0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet, K2Node_MakeMap_Map) == 0x0002A8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet::K2Node_MakeMap_Map' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementAndCharaNameVisibility
// 0x0005 (0x0005 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility) == 0x000005, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility, K2Node_Select_Default) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.InitLevelSyncValueColor
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F1E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F1F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F20[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor) == 0x000040, "Wrong size on MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, K2Node_MakeArray_Array) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, CallFunc_Array_Get_Item) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'MyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SwitchAllStatusValueForLevelSync
// 0x0058 (0x0058 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync final
{
public:
	bool                                          InIsLevelSync;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsLevelSync;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F21[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F22[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F23[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F24[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetSwitcher*>                K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F25[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F26[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync) == 0x000058, "Wrong size on MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, InIsLevelSync) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::InIsLevelSync' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, LocalIsLevelSync) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_bool_Variable) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_byte_Variable) == 0x000009, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_byte_Variable_1) == 0x00000A, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_int_Variable_1) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, Temp_bool_Variable_1) == 0x00001C, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, K2Node_Select_Default) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, K2Node_MakeArray_Array) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, CallFunc_Array_Get_Item) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync, K2Node_Select_Default_1) == 0x000051, "Member 'MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync::K2Node_Select_Default_1' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateLevelSync
// 0x08E0 (0x08E0 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_UpdateLevelSync final
{
public:
	bool                                          InIsLevelSync;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F27[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalValue;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LocalSwitcher;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBImagineParam                  LocalStackBImagineParam;                           // 0x0010(0x0060)(Edit, BlueprintVisible)
	bool                                          LocalIsDefensivePowerStackB;                       // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsCriticalPointStackB;                        // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsIntStackB;                                  // 0x0072(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsMndStackB;                                  // 0x0073(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDexStackB;                                  // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsVitStackB;                                  // 0x0075(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStrStackB;                                  // 0x0076(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsAttributePowerStackB;                       // 0x0077(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsOffensivePowerStackB;                       // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F28[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   LocalStackBWeaponParam;                            // 0x0080(0x0030)(Edit, BlueprintVisible)
	int32                                         LocalItemId;                                       // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalEquipmentOwnItemInfo;                         // 0x00B8(0x0118)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                LocalEquipmentBag;                                 // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharaEquipItemInfo>            LocalEquipedItemInfos;                             // 0x01E0(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalLevelSyncTarget;                              // 0x01F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalArrayId;                                      // 0x01F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             LocalTextForLevelSync;                             // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevelSyncValue;                               // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsValueEqual;                                 // 0x0204(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F29[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalOriginalParamArray;                           // 0x0208(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LocalParamArray;                                   // 0x0218(0x0010)(Edit, BlueprintVisible)
	struct FSBCharacterStatus                     LocalOriginalStatus;                               // 0x0228(0x0040)(Edit, BlueprintVisible, NoDestructor)
	struct FSBCharacterStatus                     LocalStatus;                                       // 0x0268(0x0040)(Edit, BlueprintVisible, NoDestructor)
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSyncApplied;                           // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x02B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x02B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_5;            // 0x02B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_6;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_7;            // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F2A[0x1];                                     // 0x02BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_8;            // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_9;            // 0x02D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_10;           // 0x02D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_11;           // 0x02D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_12;           // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_13;           // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_14;           // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F2B[0x5];                                     // 0x02DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02F0(0x0018)()
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue; // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_1; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0315(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x0316(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType_1; // 0x0317(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F2C[0x2];                                     // 0x031A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F2D[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F2E[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0330(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F2F[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F30[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        K2Node_Select_Default;                             // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_Select_Default_1;                           // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item_1;                         // 0x0368(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F31[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0398(0x0010)(ReferenceParm)
	struct FSBCharacterStatus                     CallFunc_GetStatus_ReturnValue;                    // 0x03A8(0x0040)(ConstParm, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_2;                         // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F32[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x03F0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F33[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x040D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F34[0x2];                                     // 0x040E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0415(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0416(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0417(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetStackBImagineParamByImagineId_IsValid; // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F35[0x5];                                     // 0x041B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBImagineParam                  CallFunc_GetStackBImagineParamByImagineId_ReturnValue; // 0x0420(0x0060)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_9;                // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_10;               // 0x0482(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_11;               // 0x0483(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_12;               // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_13;               // 0x0485(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_15;           // 0x0486(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_14;               // 0x0487(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_15;               // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F36[0x6];                                     // 0x048A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x0490(0x0030)(ConstParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F37[0x6];                                     // 0x04C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F38[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x04D8(0x0118)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F39[0x7];                                     // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0600(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_1;           // 0x0628(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_2;           // 0x0650(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_3;           // 0x0678(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_4;           // 0x06A0(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_5;           // 0x06C8(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_6;           // 0x06F0(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_7;           // 0x0718(0x0028)(ConstParm)
	TArray<struct FCharaEquipItemInfo>            K2Node_MakeArray_Array_2;                          // 0x0740(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_2; // 0x0750(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_16;           // 0x0754(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F3A[0x3];                                     // 0x0755(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_3; // 0x0758(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F3B[0x4];                                     // 0x075C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0760(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0770(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F3C[0x3];                                     // 0x0789(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x078C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0790(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x07A0(0x0018)()
	int32                                         CallFunc_Array_Get_Item_3;                         // 0x07B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x07BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F3D[0x3];                                     // 0x07C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x07C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_17;           // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x07C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x07CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x07CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x07CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x07CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x07CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x07CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x07D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x07D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x07D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x07D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x07D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x07D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x07DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x07DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x07DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F3E[0x1];                                     // 0x07DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_4;                         // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_18;           // 0x07E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x07E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F3F[0x2];                                     // 0x07E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x07E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x07F8(0x0018)()
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_3;                          // 0x0810(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UTextBlock*                             CallFunc_Array_Get_Item_5;                         // 0x0820(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0828(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x082C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x082D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x082E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x082F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBCharacterStatus                     CallFunc_GetOriginalStatus_ReturnValue;            // 0x0830(0x0040)(ConstParm, NoDestructor)
	struct FSBCharacterStatus                     CallFunc_GetStatus_ReturnValue_1;                  // 0x0870(0x0040)(ConstParm, NoDestructor)
	TArray<int32>                                 K2Node_MakeArray_Array_4;                          // 0x08B0(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_5;                          // 0x08C0(0x0010)(ReferenceParm)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x08D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_UpdateLevelSync");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync) == 0x0008E0, "Wrong size on MyCharaMenu_LeftSideParameters_C_UpdateLevelSync");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, InIsLevelSync) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::InIsLevelSync' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalValue) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalSwitcher) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalSwitcher' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalStackBImagineParam) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalStackBImagineParam' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsDefensivePowerStackB) == 0x000070, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsDefensivePowerStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsCriticalPointStackB) == 0x000071, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsCriticalPointStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsIntStackB) == 0x000072, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsIntStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsMndStackB) == 0x000073, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsMndStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsDexStackB) == 0x000074, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsDexStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsVitStackB) == 0x000075, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsVitStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsStrStackB) == 0x000076, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsStrStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsAttributePowerStackB) == 0x000077, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsAttributePowerStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsOffensivePowerStackB) == 0x000078, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsOffensivePowerStackB' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalStackBWeaponParam) == 0x000080, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalItemId) == 0x0000B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalItemId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalStackBNum) == 0x0000B4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalEquipmentOwnItemInfo) == 0x0000B8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalEquipmentOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalMasterDataManager) == 0x0001D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalEquipmentBag) == 0x0001D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalEquipmentBag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalEquipedItemInfos) == 0x0001E0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalEquipedItemInfos' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalLevelSyncTarget) == 0x0001F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalArrayId) == 0x0001F4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalArrayId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalTextForLevelSync) == 0x0001F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalTextForLevelSync' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalLevelSyncValue) == 0x000200, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalLevelSyncValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsValueEqual) == 0x000204, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsValueEqual' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalOriginalParamArray) == 0x000208, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalOriginalParamArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalParamArray) == 0x000218, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalParamArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalOriginalStatus) == 0x000228, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalOriginalStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalStatus) == 0x000268, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalStatus' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalSBPlayerCharacter) == 0x0002A8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, LocalIsLevelSyncApplied) == 0x0002B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::LocalIsLevelSyncApplied' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0002B1, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue) == 0x0002B2, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0002B3, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0002B4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0002B5, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_4) == 0x0002B6, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_5) == 0x0002B7, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_6) == 0x0002B8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_7) == 0x0002B9, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_1) == 0x0002BA, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Loop_Counter_Variable) == 0x0002BC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Add_IntInt_ReturnValue) == 0x0002C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Array_Index_Variable) == 0x0002C4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Variable) == 0x0002C8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Variable_1) == 0x0002CC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Array_Index_Variable_1) == 0x0002D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_8) == 0x0002D4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_9) == 0x0002D5, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_10) == 0x0002D6, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_11) == 0x0002D7, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_12) == 0x0002D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_13) == 0x0002D9, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_14) == 0x0002DA, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_IntToString_ReturnValue) == 0x0002E0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_StringToText_ReturnValue) == 0x0002F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBNum_ReturnValue) == 0x000308, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue) == 0x00030C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_1) == 0x000310, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000314, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_2) == 0x000315, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x000316, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBEnableType_OutStackBEnableType_1) == 0x000317, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBEnableType_OutStackBEnableType_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000318, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Greater_IntInt_ReturnValue) == 0x000319, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Array_Index_Variable_2) == 0x00031C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_MakeLiteralBool_ReturnValue) == 0x000320, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Get_Item) == 0x000324, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000328, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_IntToText_ReturnValue) == 0x000330, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000348, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Length_ReturnValue) == 0x00034C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Less_IntInt_ReturnValue) == 0x000350, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_Select_Default) == 0x000358, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_Select_Default_1) == 0x000360, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Get_Item_1) == 0x000368, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Length_ReturnValue_1) == 0x000390, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_MakeArray_Array) == 0x000398, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStatus_ReturnValue) == 0x0003A8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Get_Item_2) == 0x0003E8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_MakeArray_Array_1) == 0x0003F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Length_ReturnValue_2) == 0x000400, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue) == 0x000404, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Loop_Counter_Variable_1) == 0x000408, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_1) == 0x00040C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Less_IntInt_ReturnValue_1) == 0x00040D, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Add_IntInt_ReturnValue_1) == 0x000410, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_2) == 0x000414, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_3) == 0x000415, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_4) == 0x000416, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_5) == 0x000417, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_6) == 0x000418, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_7) == 0x000419, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBImagineParamByImagineId_IsValid) == 0x00041A, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBImagineParamByImagineId_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBImagineParamByImagineId_ReturnValue) == 0x000420, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBImagineParamByImagineId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_8) == 0x000480, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_9) == 0x000481, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_10) == 0x000482, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_11) == 0x000483, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_12) == 0x000484, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_13) == 0x000485, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_15) == 0x000486, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_14) == 0x000487, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Not_PreBool_ReturnValue_15) == 0x000488, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Not_PreBool_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x000489, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x000490, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_SwitchEnum_CmpSuccess) == 0x0004C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetMasterDataManager_IsValid) == 0x0004C1, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetMasterDataManager_ReturnValue) == 0x0004C8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0004D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0004D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipmentBag_ReturnValue) == 0x0005F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_3) == 0x0005F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000600, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_1) == 0x000628, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_2) == 0x000650, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_3) == 0x000678, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_4) == 0x0006A0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_5) == 0x0006C8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_6) == 0x0006F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetEquipItemInfo_ReturnValue_7) == 0x000718, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetEquipItemInfo_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_MakeArray_Array_2) == 0x000740, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_2) == 0x000750, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_16) == 0x000754, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_3) == 0x000758, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetTotalPowerBySelectStackBType_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000760, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000770, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_4) == 0x000788, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00078C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000790, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0007A0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Get_Item_3) == 0x0007B8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, Temp_int_Loop_Counter_Variable_2) == 0x0007BC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Less_IntInt_ReturnValue_2) == 0x0007C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Add_IntInt_ReturnValue_2) == 0x0007C4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_17) == 0x0007C8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_SwitchInteger_CmpSuccess) == 0x0007C9, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_5) == 0x0007CA, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_6) == 0x0007CB, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_7) == 0x0007CC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_8) == 0x0007CD, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_9) == 0x0007CE, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_10) == 0x0007CF, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_11) == 0x0007D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_12) == 0x0007D1, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_13) == 0x0007D2, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_14) == 0x0007D3, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Length_ReturnValue_3) == 0x0007D4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Length_ReturnValue_4) == 0x0007D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Less_IntInt_ReturnValue_3) == 0x0007DC, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Less_IntInt_ReturnValue_4) == 0x0007DD, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_BooleanAND_ReturnValue) == 0x0007DE, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Get_Item_4) == 0x0007E0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_NotEqual_IntInt_ReturnValue_18) == 0x0007E4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_NotEqual_IntInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_15) == 0x0007E5, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0007E8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0007F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_MakeArray_Array_3) == 0x000810, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Get_Item_5) == 0x000820, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Array_Length_ReturnValue_5) == 0x000828, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_16) == 0x00082C, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_Less_IntInt_ReturnValue_5) == 0x00082D, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x00082E, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_BooleanOR_ReturnValue) == 0x00082F, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetOriginalStatus_ReturnValue) == 0x000830, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetOriginalStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetStatus_ReturnValue_1) == 0x000870, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_MakeArray_Array_4) == 0x0008B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, K2Node_MakeArray_Array_5) == 0x0008C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0008D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateLevelSync, CallFunc_IsValid_ReturnValue_17) == 0x0008D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateLevelSync::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiffVisibility
// 0x0006 (0x0006 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility) == 0x000006, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiff
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F40[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff) == 0x000004, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff) == 0x00000C, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff, InClassType) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff, InClassLevel) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff::InClassLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateClassInfoDiff
// 0x01A0 (0x01A0 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff final
{
public:
	class FString                                 InEquippedWeaponUniqueId;                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNewWeaponUniqueId;                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NewLocalVar_0;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalNewWeaponOwnItemInfo;                         // 0x0030(0x0118)(Edit, BlueprintVisible)
	ESBClassType                                  LocalNewWeaponEquipClassType;                      // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalEquippedWeaponEquipClassType;                 // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F41[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalNewWeaponUniqueId;                            // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalEquippedWeaponUniqueId;                       // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid;  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetWeaponClassTypeByUniqueId_OutClassType; // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid_1; // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetWeaponClassTypeByUniqueId_OutClassType_1; // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff) == 0x0001A0, "Wrong size on MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, InEquippedWeaponUniqueId) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::InEquippedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, InNewWeaponUniqueId) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::InNewWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, NewLocalVar_0) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, LocalNewWeaponOwnItemInfo) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::LocalNewWeaponOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, LocalNewWeaponEquipClassType) == 0x000148, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::LocalNewWeaponEquipClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, LocalEquippedWeaponEquipClassType) == 0x000149, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::LocalEquippedWeaponEquipClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, LocalMasterDataManager) == 0x000150, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, LocalNewWeaponUniqueId) == 0x000158, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::LocalNewWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, LocalEquippedWeaponUniqueId) == 0x000168, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::LocalEquippedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetEquipmentBag_ReturnValue) == 0x000178, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetCharacterStorage_ReturnValue) == 0x000180, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x000188, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid) == 0x000190, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetWeaponClassTypeByUniqueId_OutClassType) == 0x000191, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetWeaponClassTypeByUniqueId_OutClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid_1) == 0x000192, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetWeaponClassTypeByUniqueId_OutClassType_1) == 0x000193, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetWeaponClassTypeByUniqueId_OutClassType_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000194, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000198, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParam
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_UpdateAllParam final
{
public:
	bool                                          InIncludeClassInfo;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_UpdateAllParam) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_UpdateAllParam");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_UpdateAllParam) == 0x000001, "Wrong size on MyCharaMenu_LeftSideParameters_C_UpdateAllParam");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParam, InIncludeClassInfo) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParam::InIncludeClassInfo' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetExpGaugeUpdateStop
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop) == 0x000002, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop, InIsUpdateStop) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop::InIsUpdateStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetCurrLevelSyncTarget
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget final
{
public:
	int32                                         OutLevelSyncTarget;                                // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F42[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F43[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget) == 0x000038, "Wrong size on MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, OutLevelSyncTarget) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::OutLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, LocalSBPlayerCharacter) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, LocalClassLevel) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, Temp_bool_Variable) == 0x000014, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000015, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, CallFunc_Min_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, K2Node_Select_Default) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, CallFunc_GetClassLevel_ReturnValue) == 0x000024, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetLevelSyncTargetByUniqueId
// 0x04A8 (0x04A8 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutLevelSyncTarget;                                // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  OutClassType;                                      // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F44[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalEquipOwnItemInfo;                             // 0x0020(0x0118)(Edit, BlueprintVisible)
	int32                                         LocalClassLevel;                                   // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x013C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F45[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F46[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F47[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F48[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue_1;         // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F49[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue_1;         // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F4A[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue_1;                        // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4B[0x2];                                     // 0x0186(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0188(0x00B0)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4C[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4D[0x2];                                     // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4E[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0260(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F4F[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0380(0x0118)(ConstParm)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemTypeByUniqueId_IsValid;            // 0x049D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     CallFunc_GetItemTypeByUniqueId_OutItemType;        // 0x049E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        CallFunc_GetItemTypeByUniqueId_OutImagineCategoryType; // 0x049F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId) == 0x0004A8, "Wrong size on MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, InUniqueId) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, OutLevelSyncTarget) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::OutLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, OutClassType) == 0x000014, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::OutClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, LocalSBPlayerCharacter) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, LocalEquipOwnItemInfo) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::LocalEquipOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, LocalClassLevel) == 0x000138, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, LocalClassType) == 0x00013C, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::LocalClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, LocalUniqueId) == 0x000140, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000150, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000154, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetPlayerClassType_ClassType) == 0x000158, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_Min_ReturnValue) == 0x00015C, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, Temp_bool_Variable) == 0x000160, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, K2Node_Select_Default) == 0x000164, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetClassLevel_ReturnValue) == 0x000168, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_IsLevelSyncApplied_ReturnValue_1) == 0x00016C, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_IsLevelSyncApplied_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetLevelSyncTarget_ReturnValue_1) == 0x000170, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetLevelSyncTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000178, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_Min_ReturnValue_1) == 0x000180, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_Min_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_IsValid_ReturnValue) == 0x000184, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_FindWeaponMaster_bIsValid) == 0x000185, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000188, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetEquipmentBag_ReturnValue) == 0x000238, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_IsValid_ReturnValue_1) == 0x000240, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetCharacterStorage_ReturnValue) == 0x000248, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, Temp_bool_Variable_1) == 0x000250, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_IsValid_ReturnValue_2) == 0x000251, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, K2Node_Select_Default_1) == 0x000254, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000258, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000260, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000378, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000380, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000498, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00049C, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetItemTypeByUniqueId_IsValid) == 0x00049D, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetItemTypeByUniqueId_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetItemTypeByUniqueId_OutItemType) == 0x00049E, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetItemTypeByUniqueId_OutItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_GetItemTypeByUniqueId_OutImagineCategoryType) == 0x00049F, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_GetItemTypeByUniqueId_OutImagineCategoryType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0004A0, "Member 'MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetItemTypeByUniqueId
// 0x0468 (0x0468 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     OutItemType;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        OutImagineCategoryType;                            // 0x0012(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        LocalImagineCategoryType;                          // 0x0013(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     LocalItemType;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F50[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalEquipOwnItemInfo;                             // 0x0020(0x0118)(Edit, BlueprintVisible)
	int32                                         LocalClassLevel;                                   // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x013C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F51[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F52[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0158(0x00B0)()
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F53[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F54[0x5];                                     // 0x0223(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0228(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F55[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0348(0x0118)(ConstParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0461(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId) == 0x000468, "Wrong size on MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, InUniqueId) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, IsValid) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, OutItemType) == 0x000011, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::OutItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, OutImagineCategoryType) == 0x000012, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::OutImagineCategoryType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalImagineCategoryType) == 0x000013, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalImagineCategoryType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalItemType) == 0x000014, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalSBPlayerCharacter) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalEquipOwnItemInfo) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalEquipOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalClassLevel) == 0x000138, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalClassType) == 0x00013C, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, LocalUniqueId) == 0x000140, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_GetPlayerClassType_ClassType) == 0x000150, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_FindImagineMaster_bIsValid) == 0x000151, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_FindImagineMaster_ImagineMaster) == 0x000158, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_GetClassLevel_ReturnValue) == 0x000208, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_GetEquipmentBag_ReturnValue) == 0x000210, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_GetCharacterStorage_ReturnValue) == 0x000218, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_IsValid_ReturnValue) == 0x000220, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_IsValid_ReturnValue_1) == 0x000221, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000222, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000228, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000340, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000348, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, K2Node_SwitchEnum_CmpSuccess) == 0x000460, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000461, "Member 'MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetDhcBattleTopMenuMode
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode final
{
public:
	bool                                          InIsDhcBattleTopMenuMode;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F56[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F57[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode) == 0x000020, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode, InIsDhcBattleTopMenuMode) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode::InIsDhcBattleTopMenuMode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParamByDhcBattleScoreInfo
// 0x03E0 (0x03E0 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo final
{
public:
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBDhcBattlePlayerStatusInfo           LocalPlayerStatusInfo;                             // 0x00D8(0x0040)(Edit, BlueprintVisible)
	struct FSBDhcBattleHighScoreInfo              LocalScoreInfo;                                    // 0x0118(0x00D8)(Edit, BlueprintVisible)
	float                                         CallFunc_GetDefaultHpGaugeWidth_OutHpGaugeWidth;   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F58[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0218(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0230(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0268(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0280(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_4;           // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_5;           // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02D0(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_6;           // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_7;           // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0308(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0320(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_8;           // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_9;           // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0358(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0370(0x0018)()
	struct FSBScbClassData                        CallFunc_GetScbClassData_ReturnValue;              // 0x0388(0x0024)(NoDestructor)
	uint8                                         Pad_7F59[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x03C0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo) == 0x0003E0, "Wrong size on MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, InScoreInfo) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::InScoreInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, LocalPlayerStatusInfo) == 0x0000D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::LocalPlayerStatusInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, LocalScoreInfo) == 0x000118, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::LocalScoreInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_GetDefaultHpGaugeWidth_OutHpGaugeWidth) == 0x0001F0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_GetDefaultHpGaugeWidth_OutHpGaugeWidth' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_IsValid_ReturnValue) == 0x0001F4, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x0001F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000208, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000218, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000230, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000248, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000258, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000268, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000280, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_4) == 0x000298, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_5) == 0x0002A8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002B8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002D0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_6) == 0x0002E8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_7) == 0x0002F8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000308, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000320, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_8) == 0x000338, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_IntToString_ReturnValue_9) == 0x000348, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_IntToString_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000358, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000370, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_GetScbClassData_ReturnValue) == 0x000388, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_GetScbClassData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_GetClassNameText_ReturnValue) == 0x0003B0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0003C0, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo, CallFunc_IsValid_ReturnValue_1) == 0x0003D8, "Member 'MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.AdjustClassInfoLayout
// 0x0110 (0x0110 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout final
{
public:
	bool                                          LocalIsScbPopupEnable;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F5A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F5B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F5C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_4;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_5;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F5D[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_6;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F5E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F5F[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_7;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F60[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_8;                             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F61[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F62[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_2;                // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F63[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_3;                           // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_9;                             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_3;                // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_4;                           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F64[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_4;                        // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_4;                        // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout) == 0x000008, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout) == 0x000110, "Wrong size on MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, LocalIsScbPopupEnable) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::LocalIsScbPopupEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_1) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_bool_Variable) == 0x00000C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_2) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_3) == 0x000014, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_bool_Variable_1) == 0x000018, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_4) == 0x00001C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_5) == 0x000020, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_bool_Variable_2) == 0x000024, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_byte_Variable) == 0x000025, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_byte_Variable_1) == 0x000026, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_6) == 0x000028, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000030, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_GetPosition_ReturnValue) == 0x000038, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_X) == 0x000040, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_Y) == 0x000044, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_bool_Variable_3) == 0x000048, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000050, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_GetPosition_ReturnValue_1) == 0x000058, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_7) == 0x000060, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_X_1) == 0x000064, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_Y_1) == 0x000068, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_bool_Variable_4) == 0x00006C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_8) == 0x000070, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, K2Node_Select_Default) == 0x000074, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, K2Node_Select_Default_1) == 0x00007C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000080, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_bool_Variable_5) == 0x000088, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_GetPosition_ReturnValue_2) == 0x00008C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_GetPosition_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_X_2) == 0x000094, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_Y_2) == 0x000098, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, K2Node_Select_Default_2) == 0x00009C, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_MakeVector2D_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000A8, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_IsValid_ReturnValue_3) == 0x0000B0, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, K2Node_Select_Default_3) == 0x0000B4, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x0000B8, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, Temp_float_Variable_9) == 0x0000C0, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::Temp_float_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_GetPosition_ReturnValue_3) == 0x0000C4, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_GetPosition_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_X_3) == 0x0000CC, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_Y_3) == 0x0000D0, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, K2Node_Select_Default_4) == 0x0000D4, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_MakeVector2D_ReturnValue_2) == 0x0000D8, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_MakeVector2D_ReturnValue_3) == 0x0000E0, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_IsValid_ReturnValue_4) == 0x0000E8, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, K2Node_Select_Default_5) == 0x0000E9, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x0000F0, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_GetSize_ReturnValue) == 0x0000F8, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_X_4) == 0x000100, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_BreakVector2D_Y_4) == 0x000104, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout, CallFunc_MakeVector2D_ReturnValue_4) == 0x000108, "Member 'MyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupExpOverflowGrp
// 0x0012 (0x0012 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp final
{
public:
	bool                                          bInIsClassLevelCounterStop;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIsClassLevelLimit;                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInIsClassLevelLimitSmallerThanCounterStop;        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsClassLevelLimitSmallerThanCounterStop;      // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsClassLevelLimit;                            // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsClassLevelCounterStop;                      // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp) == 0x000012, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, bInIsClassLevelCounterStop) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::bInIsClassLevelCounterStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, bInIsClassLevelLimit) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::bInIsClassLevelLimit' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, bInIsClassLevelLimitSmallerThanCounterStop) == 0x000002, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::bInIsClassLevelLimitSmallerThanCounterStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, LocalIsClassLevelLimitSmallerThanCounterStop) == 0x000003, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::LocalIsClassLevelLimitSmallerThanCounterStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, LocalIsClassLevelLimit) == 0x000004, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::LocalIsClassLevelLimit' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, LocalIsClassLevelCounterStop) == 0x000005, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::LocalIsClassLevelCounterStop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, Temp_bool_Variable) == 0x000006, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_Not_PreBool_ReturnValue) == 0x000007, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_BooleanAND_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_Not_PreBool_ReturnValue_1) == 0x000009, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_BooleanOR_ReturnValue) == 0x00000A, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, Temp_byte_Variable) == 0x00000B, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, Temp_byte_Variable_1) == 0x00000D, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_BooleanOR_ReturnValue_1) == 0x00000E, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, K2Node_Select_Default) == 0x00000F, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp, CallFunc_IsValid_ReturnValue_2) == 0x000011, "Member 'MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetIsExpOverflowInvalid
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid final
{
public:
	bool                                          bInIsInvalid;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid) == 0x000002, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid, bInIsInvalid) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid::bInIsInvalid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassTypeForTutorialHelp
// 0x0003 (0x0003 - 0x0000)
struct MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp final
{
public:
	bool                                          bInIsUsingClassTypeForTutorialHelp;                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassType;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp) == 0x000001, "Wrong alignment on MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp");
static_assert(sizeof(MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp) == 0x000003, "Wrong size on MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp, bInIsUsingClassTypeForTutorialHelp) == 0x000000, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp::bInIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp, InClassType) == 0x000001, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

