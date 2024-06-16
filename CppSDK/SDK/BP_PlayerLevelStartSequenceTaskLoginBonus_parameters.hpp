#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskLoginBonus

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus
// 0x01A0 (0x01A0 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_915E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBLogin_Bonus_Window;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_915F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9160[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLoginBonusWindow*                    CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_2;               // 0x0039(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9161[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_2;                    // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9162[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0050(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9163[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_1;                    // 0x0054(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBNetworkDataCache*              CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0058(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetLoginBonusActiveIds_IdList;            // 0x0060(0x0010)(ReferenceParm)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLoginBonusComponent*           CallFunc_GetLoginBonusComponent_ReturnValue;       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFinish;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool bWasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9164[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9165[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9166[0x5];                                     // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	class USBPlayerLoginBonusComponent*           CallFunc_GetLoginBonusComponent_ReturnValue_1;     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0118(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9167[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x011C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9168[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0124(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9169[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInMission_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_916A[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0144(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_916B[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNeedLoginBonusWindow_ReturnValue;       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_916C[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0170(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_916D[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_916E[0x5];                                     // 0x0183(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus) == 0x0001A0, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, Temp_class_Variable) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_ClassDynamicCast_AsSBLogin_Bonus_Window) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_ClassDynamicCast_AsSBLogin_Bonus_Window' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_Create_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, Temp_bool_IsClosed_Variable) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_bWasSuccessful_2) == 0x000039, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_bWasSuccessful_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_ErrorCode_2) == 0x00003C, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_ErrorCode_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetSBPlayerController_ReturnValue) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_bWasSuccessful_1) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_ErrorCode_1) == 0x000054, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetLoginBonusActiveIds_IdList) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetLoginBonusActiveIds_IdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_Loaded) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetLoginBonusComponent_ReturnValue) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetLoginBonusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_IsFinish) == 0x000098, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_IsFinish' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_IsStandalone_ReturnValue) == 0x00009A, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x00009B, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CreateDelegate_OutputDelegate_2) == 0x00009C, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, Temp_bool_Has_Been_Initd_Variable) == 0x0000AC, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0000B0, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetHUD_ReturnValue) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D9, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_IsValid_ReturnValue_1) == 0x0000DA, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0000F0, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetLoginBonusComponent_ReturnValue_1) == 0x000110, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetLoginBonusComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_bWasSuccessful) == 0x000118, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_ErrorCode) == 0x00011C, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000120, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CreateDelegate_OutputDelegate_3) == 0x000124, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_BooleanAND_ReturnValue_1) == 0x000134, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x000138, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_IsInMission_ReturnValue) == 0x000140, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_IsInMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CreateDelegate_OutputDelegate_4) == 0x000144, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetNetworkDataCache_IsValid) == 0x000154, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000158, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_IsNeedLoginBonusWindow_ReturnValue) == 0x000160, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_IsNeedLoginBonusWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetQuestStatus_ReturnValue) == 0x000161, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000162, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x000168, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, K2Node_CustomEvent_InRetCode) == 0x000170, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000178, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000180, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_BooleanAND_ReturnValue_2) == 0x000181, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetDebugFunction_IsValid) == 0x000182, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetDebugFunction_ReturnValue) == 0x000188, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_MakeLiteralName_ReturnValue) == 0x000190, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus, CallFunc_GetBool_ReturnValue) == 0x000198, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus::CallFunc_GetBool_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnCharacterJoinExtDelegate_����_0
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0) == 0x000004, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0, InRetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnCharacterJoinExtDelegate______0::InRetCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.CheckCompleteFunc
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_916F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc, bWasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc, ErrorCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc::ErrorCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCheckRequest
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest final
{
public:
	bool                                          IsFinish;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest, IsFinish) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest::IsFinish' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.GetDetailWork
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9170[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork, bWasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork, ErrorCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork::ErrorCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCompletefunc
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9171[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc, bWasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc, ErrorCode) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc::ErrorCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnLoaded_9C8A3A574D92EE195DA83A82A8920833
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833, Loaded) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833::Loaded' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Lock Loading Screen
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen final
{
public:
	bool                                          Lock;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9172[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen) == 0x000020, "Wrong size on BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen, Lock) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen::Lock' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen, CallFunc_MakeLiteralString_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskLoginBonus_C_Lock_Loading_Screen::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

