#pragma once

 

// Package: BP_SystemMessageManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SystemMessageRequestData_structs.hpp"


namespace SDK::Params
{

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ExecuteUbergraph_BP_SystemMessageManager
// 0x01E8 (0x01E8 - 0x0000)
struct BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E90[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	const class UObject*                          K2Node_Event_WorldContextObject;                   // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_Message;                              // 0x0038(0x0018)(ConstParm)
	bool                                          K2Node_Event_IsLowerPosition;                      // 0x0050(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bDoNotSkip;                           // 0x0051(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E91[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSystemMessageRequestData              K2Node_MakeStruct_SystemMessageRequestData;        // 0x0058(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E92[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSystemMessageRequestData              K2Node_CustomEvent_ReqData;                        // 0x0088(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E93[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessage*                       CallFunc_CreateSysMsgUI_ReturnValue;               // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E94[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USystemMessage_C*                       K2Node_DynamicCast_AsSystem_Message;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E95[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E96[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E97[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSystemMessageRequestData              CallFunc_Array_Get_Item;                           // 0x00E8(0x0028)(HasGetValueTypeHash)
	struct FSystemMessageRequestData              CallFunc_Array_Get_Item_1;                         // 0x0110(0x0028)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSystemMessageShowingOrStandby_ReturnValue; // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E98[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E99[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E9A[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UObject*                          K2Node_Event_WorldContextObject_1;                 // 0x0150(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_EmoteId;                              // 0x0158(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0164(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E9B[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E9C[0x1];                                     // 0x0187(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDemoManager_IsValid;                   // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E9D[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSystemMessageRequestData              CallFunc_Array_Get_Item_2;                         // 0x01A0(0x0028)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDemoManager_IsValid_1;                 // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E9E[0x2];                                     // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01D8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager) == 0x000008, "Wrong alignment on BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager");
static_assert(sizeof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager) == 0x0001E8, "Wrong size on BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, EntryPoint) == 0x000000, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_Event_WorldContextObject) == 0x000030, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_Event_WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_Event_Message) == 0x000038, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_Event_IsLowerPosition) == 0x000050, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_Event_IsLowerPosition' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_Event_bDoNotSkip) == 0x000051, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_Event_bDoNotSkip' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_MakeStruct_SystemMessageRequestData) == 0x000058, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_MakeStruct_SystemMessageRequestData' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsDemoPlaying_ReturnValue) == 0x000080, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_CustomEvent_ReqData) == 0x000088, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_CustomEvent_ReqData' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_CreateSysMsgUI_ReturnValue) == 0x0000B8, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_CreateSysMsgUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsValid_ReturnValue_2) == 0x0000C0, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_DynamicCast_AsSystem_Message) == 0x0000C8, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_DynamicCast_AsSystem_Message' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue) == 0x0000D4, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Add_ReturnValue) == 0x0000DC, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Get_Item_1) == 0x000110, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue_2) == 0x000138, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Greater_IntInt_ReturnValue) == 0x00013C, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsSystemMessageShowingOrStandby_ReturnValue) == 0x00013D, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsSystemMessageShowingOrStandby_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue_3) == 0x000140, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000144, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue_4) == 0x000148, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_Event_WorldContextObject_1) == 0x000150, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_Event_WorldContextObject_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_Event_EmoteId) == 0x000158, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_Event_EmoteId' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Subtract_IntInt_ReturnValue) == 0x000160, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_CreateDelegate_OutputDelegate) == 0x000164, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, Temp_int_Array_Index_Variable) == 0x000174, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000178, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue_5) == 0x00017C, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000180, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000181, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000182, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_BooleanAND_ReturnValue) == 0x000183, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_BooleanAND_ReturnValue_1) == 0x000184, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsVisible_ReturnValue) == 0x000185, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_IsValid_ReturnValue_3) == 0x000186, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, Temp_int_Loop_Counter_Variable) == 0x000188, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Add_ReturnValue_1) == 0x00018C, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Add_IntInt_ReturnValue) == 0x000190, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_GetDemoManager_IsValid) == 0x000194, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_GetDemoManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_GetDemoManager_ReturnValue) == 0x000198, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Get_Item_2) == 0x0001A0, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Array_Length_ReturnValue_6) == 0x0001C8, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001CC, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_GetDemoManager_IsValid_1) == 0x0001CD, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_GetDemoManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, CallFunc_GetDemoManager_ReturnValue_1) == 0x0001D0, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001D8, "Member 'BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.CreateSysMsg
// 0x0028 (0x0028 - 0x0000)
struct BP_SystemMessageManager_C_CreateSysMsg final
{
public:
	struct FSystemMessageRequestData              ReqData;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_SystemMessageManager_C_CreateSysMsg) == 0x000008, "Wrong alignment on BP_SystemMessageManager_C_CreateSysMsg");
static_assert(sizeof(BP_SystemMessageManager_C_CreateSysMsg) == 0x000028, "Wrong size on BP_SystemMessageManager_C_CreateSysMsg");
static_assert(offsetof(BP_SystemMessageManager_C_CreateSysMsg, ReqData) == 0x000000, "Member 'BP_SystemMessageManager_C_CreateSysMsg::ReqData' has a wrong offset!");

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowMessage
// 0x0028 (0x0028 - 0x0000)
struct BP_SystemMessageManager_C_ShowMessage final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsLowerPosition;                                   // 0x0020(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDoNotSkip;                                        // 0x0021(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMessageManager_C_ShowMessage) == 0x000008, "Wrong alignment on BP_SystemMessageManager_C_ShowMessage");
static_assert(sizeof(BP_SystemMessageManager_C_ShowMessage) == 0x000028, "Wrong size on BP_SystemMessageManager_C_ShowMessage");
static_assert(offsetof(BP_SystemMessageManager_C_ShowMessage, WorldContextObject) == 0x000000, "Member 'BP_SystemMessageManager_C_ShowMessage::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ShowMessage, Message) == 0x000008, "Member 'BP_SystemMessageManager_C_ShowMessage::Message' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ShowMessage, IsLowerPosition) == 0x000020, "Member 'BP_SystemMessageManager_C_ShowMessage::IsLowerPosition' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ShowMessage, bDoNotSkip) == 0x000021, "Member 'BP_SystemMessageManager_C_ShowMessage::bDoNotSkip' has a wrong offset!");

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowGetEmoteMessage
// 0x0010 (0x0010 - 0x0000)
struct BP_SystemMessageManager_C_ShowGetEmoteMessage final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EmoteId;                                           // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SystemMessageManager_C_ShowGetEmoteMessage) == 0x000008, "Wrong alignment on BP_SystemMessageManager_C_ShowGetEmoteMessage");
static_assert(sizeof(BP_SystemMessageManager_C_ShowGetEmoteMessage) == 0x000010, "Wrong size on BP_SystemMessageManager_C_ShowGetEmoteMessage");
static_assert(offsetof(BP_SystemMessageManager_C_ShowGetEmoteMessage, WorldContextObject) == 0x000000, "Member 'BP_SystemMessageManager_C_ShowGetEmoteMessage::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_ShowGetEmoteMessage, EmoteId) == 0x000008, "Member 'BP_SystemMessageManager_C_ShowGetEmoteMessage::EmoteId' has a wrong offset!");

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.IsSystemMessageShowingOrStandby
// 0x000C (0x000C - 0x0000)
struct BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E9F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby) == 0x000004, "Wrong alignment on BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby");
static_assert(sizeof(BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby) == 0x00000C, "Wrong size on BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby");
static_assert(offsetof(BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby, ReturnValue) == 0x000000, "Member 'BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.GetContentActivateMessage
// 0x0168 (0x0168 - 0x0000)
struct BP_SystemMessageManager_C_GetContentActivateMessage final
{
public:
	TArray<class FName>                           ContentId;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Message;                                           // 0x0010(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EA0[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ContentsName;                                      // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EA1[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EA2[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0070(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EA3[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0138(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
};
static_assert(alignof(BP_SystemMessageManager_C_GetContentActivateMessage) == 0x000008, "Wrong alignment on BP_SystemMessageManager_C_GetContentActivateMessage");
static_assert(sizeof(BP_SystemMessageManager_C_GetContentActivateMessage) == 0x000168, "Wrong size on BP_SystemMessageManager_C_GetContentActivateMessage");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, ContentId) == 0x000000, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::ContentId' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, Message) == 0x000010, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::Message' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, ReturnValue) == 0x000028, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, ContentsName) == 0x000030, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::ContentsName' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, Temp_int_Array_Index_Variable) == 0x000044, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Array_Get_Item) == 0x00004C, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x000058, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_IsEmpty_ReturnValue) == 0x000069, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_GetEmptyText_ReturnValue) == 0x000070, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_IsEmpty_ReturnValue_1) == 0x000088, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B8, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000108, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, K2Node_MakeArray_Array) == 0x000118, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000128, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000138, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SystemMessageManager_C_GetContentActivateMessage, CallFunc_Format_ReturnValue) == 0x000150, "Member 'BP_SystemMessageManager_C_GetContentActivateMessage::CallFunc_Format_ReturnValue' has a wrong offset!");

}

