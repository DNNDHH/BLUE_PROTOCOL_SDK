#pragma once

 

// Package: BP_ScriptTheaterActor

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ExecuteUbergraph_BP_ScriptTheaterActor
// 0x02D8 (0x02D8 - 0x0000)
struct BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B93[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B94[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B95[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetGameSingleton_IsValid_1;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B96[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_1;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InDemoName;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayDemo_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B97[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B98[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B99[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_C*                 K2Node_DynamicCast_AsBP_Player_Controller;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B9A[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B9B[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x00C0(0x0218)()
};
static_assert(alignof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor) == 0x000008, "Wrong alignment on BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor");
static_assert(sizeof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor) == 0x0002D8, "Wrong size on BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, EntryPoint) == 0x000000, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetGameSingleton_IsValid) == 0x000014, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetGameSingleton_ReturnValue) == 0x000018, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetDemoManager_ReturnValue) == 0x000020, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000038, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetGameSingleton_IsValid_1) == 0x000054, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetGameSingleton_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetGameSingleton_ReturnValue_1) == 0x000058, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetGameSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, K2Node_CustomEvent_InDemoName) == 0x000060, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::K2Node_CustomEvent_InDemoName' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetDemoManager_ReturnValue_1) == 0x000068, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_PlayDemo_ReturnValue) == 0x000070, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_PlayDemo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_IsValid_ReturnValue_2) == 0x000071, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetPlayerController_ReturnValue) == 0x000078, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetLibrarySaveManager_IsValid) == 0x000080, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000088, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_IsValid_ReturnValue_3) == 0x000090, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, K2Node_DynamicCast_AsBP_Player_Controller) == 0x000098, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::K2Node_DynamicCast_AsBP_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_GetPlayerId_ReturnValue) == 0x0000A8, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_SaveLibraryData_ReturnValue) == 0x0000B8, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor, CallFunc_LoadLibraryData_ReturnValue) == 0x0000C0, "Member 'BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.RequestPlayDemo_Theater
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptTheaterActor_C_RequestPlayDemo_Theater final
{
public:
	class FName                                   InDemoName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptTheaterActor_C_RequestPlayDemo_Theater) == 0x000004, "Wrong alignment on BP_ScriptTheaterActor_C_RequestPlayDemo_Theater");
static_assert(sizeof(BP_ScriptTheaterActor_C_RequestPlayDemo_Theater) == 0x000008, "Wrong size on BP_ScriptTheaterActor_C_RequestPlayDemo_Theater");
static_assert(offsetof(BP_ScriptTheaterActor_C_RequestPlayDemo_Theater, InDemoName) == 0x000000, "Member 'BP_ScriptTheaterActor_C_RequestPlayDemo_Theater::InDemoName' has a wrong offset!");

}

