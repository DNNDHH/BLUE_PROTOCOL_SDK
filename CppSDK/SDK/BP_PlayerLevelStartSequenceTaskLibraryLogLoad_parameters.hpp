#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskLibraryLogLoad

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad
// 0x0148 (0x0148 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E0[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E1[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_47E2[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x0059(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E4[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             K2Node_CustomEvent_AchievementList;                // 0x0060(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0070(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E5[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_CustomEvent_DemoList;                       // 0x0078(0x0010)(ConstParm, ReferenceParm)
	class USBTheaterComponent*                    CallFunc_GetTheaterComponent_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0090(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	bool                                          K2Node_CustomEvent_Result;                         // 0x00B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E6[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x00BC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x00C0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E7[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, TArray<class FName>& DemoList)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_3;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ValidAddLibraryPic_ReturnValue;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_WasSuccessful;                        // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47E8[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     K2Node_Event_type;                                 // 0x0118(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47E9[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0120(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0130(0x0018)()
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad) == 0x000148, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_Result_3) == 0x000029, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_Result_2) == 0x000059, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_AchievementList) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_AchievementList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_Result_1) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_RetCode_1) == 0x000074, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_DemoList) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_DemoList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetTheaterComponent_ReturnValue) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetTheaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetSBRetMessage_ReturnValue) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_Result) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CustomEvent_RetCode) == 0x0000BC, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, Temp_int_Variable) == 0x0000E8, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_IsStandalone_ReturnValue) == 0x0000EC, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F0, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_CreateDelegate_OutputDelegate_3) == 0x000100, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_ValidAddLibraryPic_ReturnValue) == 0x000110, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_ValidAddLibraryPic_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_Event_WasSuccessful) == 0x000111, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_Event_WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_Event_RetCode) == 0x000114, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, K2Node_Event_type) == 0x000118, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000120, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000130, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.GetIdListCallback
// 0x000C (0x000C - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47EA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     Type;                                              // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback) == 0x00000C, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback, WasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback, RetCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback::RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback, Type) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback::Type' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchievementDataDelegate_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47EB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event::Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event, RetCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event::RetCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.CustomEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47EC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           DemoList;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0) == 0x000018, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0::Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0, RetCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0::RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0, DemoList) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0::DemoList' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchivementDelegate_event
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47ED[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             AchievementList;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event) == 0x000018, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event::Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event, AchievementList) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event::AchievementList' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.EnemyLogLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded::Result' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.UpdateDemoList
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList final
{
public:
	TArray<class FName>                           L_RemoveLists;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           L_Lists;                                           // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47EE[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetLoadDemoList_ReturnValue;              // 0x0038(0x0010)(ReferenceParm)
	struct FSBDemoData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47EF[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList) == 0x0000E8, "Wrong size on BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, L_RemoveLists) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::L_RemoveLists' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, L_Lists) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::L_Lists' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_Array_Get_Item) == 0x00002C, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_GetLoadDemoList_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_GetLoadDemoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_Array_AddUnique_ReturnValue) == 0x0000DC, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

