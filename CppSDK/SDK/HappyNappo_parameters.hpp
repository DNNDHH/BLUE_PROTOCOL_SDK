#pragma once

 

// Package: HappyNappo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HappyNappo.HappyNappo_C.ExecuteUbergraph_HappyNappo
// 0x0098 (0x0098 - 0x0000)
struct HappyNappo_C_ExecuteUbergraph_HappyNappo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_CustomEvent_NappoIds;                       // 0x0030(0x0010)(ConstParm, ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4110[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4111[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4112[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHappyNappo>                  CallFunc_GetNappoMasterData_ReturnValue;           // 0x0088(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(HappyNappo_C_ExecuteUbergraph_HappyNappo) == 0x000008, "Wrong alignment on HappyNappo_C_ExecuteUbergraph_HappyNappo");
static_assert(sizeof(HappyNappo_C_ExecuteUbergraph_HappyNappo) == 0x000098, "Wrong size on HappyNappo_C_ExecuteUbergraph_HappyNappo");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, EntryPoint) == 0x000000, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::EntryPoint' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_GetHappyNappoComponent_ReturnValue) == 0x000020, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_GetHappyNappoComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, K2Node_CustomEvent_RetCode) == 0x00002C, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, K2Node_CustomEvent_NappoIds) == 0x000030, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::K2Node_CustomEvent_NappoIds' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_PlayAnimation_ReturnValue_2) == 0x000068, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_PlaySE_ReturnValue) == 0x000070, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000074, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_PlaySE_ReturnValue_1) == 0x000078, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_BooleanAND_ReturnValue) == 0x00007C, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_GetMasterDataManager_IsValid) == 0x00007D, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_ExecuteUbergraph_HappyNappo, CallFunc_GetNappoMasterData_ReturnValue) == 0x000088, "Member 'HappyNappo_C_ExecuteUbergraph_HappyNappo::CallFunc_GetNappoMasterData_ReturnValue' has a wrong offset!");

// Function HappyNappo.HappyNappo_C.InteractHappyNappo
// 0x0018 (0x0018 - 0x0000)
struct HappyNappo_C_InteractHappyNappo final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4113[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         NappoIds;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(HappyNappo_C_InteractHappyNappo) == 0x000008, "Wrong alignment on HappyNappo_C_InteractHappyNappo");
static_assert(sizeof(HappyNappo_C_InteractHappyNappo) == 0x000018, "Wrong size on HappyNappo_C_InteractHappyNappo");
static_assert(offsetof(HappyNappo_C_InteractHappyNappo, RetCode) == 0x000000, "Member 'HappyNappo_C_InteractHappyNappo::RetCode' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_InteractHappyNappo, NappoIds) == 0x000008, "Member 'HappyNappo_C_InteractHappyNappo::NappoIds' has a wrong offset!");

// Function HappyNappo.HappyNappo_C.GetCurrentMapNappoMaster
// 0x0208 (0x0208 - 0x0000)
struct HappyNappo_C_GetCurrentMapNappoMaster final
{
public:
	TArray<struct FSBHappyNappo>                  CurrentMapMasterData;                              // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FSBHappyNappo>                  Ret;                                               // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBHappyNappo                          CallFunc_Array_Get_Item;                           // 0x0038(0x0038)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4114[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0090(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0130(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4115[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0178(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0190(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(HappyNappo_C_GetCurrentMapNappoMaster) == 0x000008, "Wrong alignment on HappyNappo_C_GetCurrentMapNappoMaster");
static_assert(sizeof(HappyNappo_C_GetCurrentMapNappoMaster) == 0x000208, "Wrong size on HappyNappo_C_GetCurrentMapNappoMaster");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CurrentMapMasterData) == 0x000000, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CurrentMapMasterData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, Ret) == 0x000010, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::Ret' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, Temp_int_Array_Index_Variable) == 0x000020, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x00002C, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Array_Get_Item) == 0x000038, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, K2Node_MakeStruct_FormatArgumentData) == 0x000090, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D0, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Conv_StringToName_ReturnValue) == 0x000128, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, K2Node_MakeStruct_FormatArgumentData_2) == 0x000130, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000170, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000178, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, K2Node_MakeStruct_FormatArgumentData_3) == 0x000190, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, K2Node_MakeArray_Array) == 0x0001D0, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Format_ReturnValue) == 0x0001E0, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetCurrentMapNappoMaster, CallFunc_Conv_TextToString_ReturnValue) == 0x0001F8, "Member 'HappyNappo_C_GetCurrentMapNappoMaster::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function HappyNappo.HappyNappo_C.Init
// 0x01E8 (0x01E8 - 0x0000)
struct HappyNappo_C_Init final
{
public:
	class FString                                 DiscoveredNappoId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         RetCode;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4116[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Nappo_ids;                                         // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsNew;                                             // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4117[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         NappoIds;                                          // 0x0030(0x0010)(Edit, BlueprintVisible)
	class FString                                 NappoId;                                           // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBHappyNappo                          DiscoverdNappoData;                                // 0x0050(0x0038)(Edit, BlueprintVisible)
	TArray<struct FSBHappyNappo>                  CurrentNappoData;                                  // 0x0088(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4118[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4119[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411A[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBHappyNappo                          CallFunc_Array_Get_Item;                           // 0x00D8(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411B[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411C[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDiscoverdCurrentMapCount_DiscoverdCount; // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411D[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0148(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0170(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411E[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBHappyNappo>                  CallFunc_GetCurrentMapNappoMaster_CurrentMapMasterData; // 0x0190(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01A0(0x0018)()
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01D0(0x0018)()
};
static_assert(alignof(HappyNappo_C_Init) == 0x000008, "Wrong alignment on HappyNappo_C_Init");
static_assert(sizeof(HappyNappo_C_Init) == 0x0001E8, "Wrong size on HappyNappo_C_Init");
static_assert(offsetof(HappyNappo_C_Init, DiscoveredNappoId) == 0x000000, "Member 'HappyNappo_C_Init::DiscoveredNappoId' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, RetCode) == 0x000010, "Member 'HappyNappo_C_Init::RetCode' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, Nappo_ids) == 0x000018, "Member 'HappyNappo_C_Init::Nappo_ids' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, IsNew) == 0x000028, "Member 'HappyNappo_C_Init::IsNew' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, NappoIds) == 0x000030, "Member 'HappyNappo_C_Init::NappoIds' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, NappoId) == 0x000040, "Member 'HappyNappo_C_Init::NappoId' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, DiscoverdNappoData) == 0x000050, "Member 'HappyNappo_C_Init::DiscoverdNappoData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CurrentNappoData) == 0x000088, "Member 'HappyNappo_C_Init::CurrentNappoData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, Temp_int_Array_Index_Variable) == 0x000098, "Member 'HappyNappo_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000A0, "Member 'HappyNappo_C_Init::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'HappyNappo_C_Init::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'HappyNappo_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'HappyNappo_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'HappyNappo_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'HappyNappo_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000114, "Member 'HappyNappo_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000118, "Member 'HappyNappo_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_GetTextFromAsset_ReturnValue) == 0x000120, "Member 'HappyNappo_C_Init::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_GetDiscoverdCurrentMapCount_DiscoverdCount) == 0x000130, "Member 'HappyNappo_C_Init::CallFunc_GetDiscoverdCurrentMapCount_DiscoverdCount' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Conv_IntToString_ReturnValue) == 0x000138, "Member 'HappyNappo_C_Init::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Conv_IntToText_ReturnValue) == 0x000148, "Member 'HappyNappo_C_Init::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Concat_StrStr_ReturnValue) == 0x000160, "Member 'HappyNappo_C_Init::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000170, "Member 'HappyNappo_C_Init::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000188, "Member 'HappyNappo_C_Init::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Array_Length_ReturnValue_1) == 0x00018C, "Member 'HappyNappo_C_Init::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_GetCurrentMapNappoMaster_CurrentMapMasterData) == 0x000190, "Member 'HappyNappo_C_Init::CallFunc_GetCurrentMapNappoMaster_CurrentMapMasterData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001A0, "Member 'HappyNappo_C_Init::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x0001B8, "Member 'HappyNappo_C_Init::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_GetLocationName_ReturnValue) == 0x0001C0, "Member 'HappyNappo_C_Init::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_Init, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001D0, "Member 'HappyNappo_C_Init::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function HappyNappo.HappyNappo_C.GetDiscoverdCurrentMapCount
// 0x0288 (0x0288 - 0x0000)
struct HappyNappo_C_GetDiscoverdCurrentMapCount final
{
public:
	TArray<class FString>                         IDs;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBHappyNappo>                  CurrenMapMasterData;                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         DiscoverdCount;                                    // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ret;                                               // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411F[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4120[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBHappyNappo                          CallFunc_Array_Get_Item;                           // 0x0048(0x0038)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0130(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0170(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0188(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4121[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01E8(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4122[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0208(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0248(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0258(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HappyNappo_C_GetDiscoverdCurrentMapCount) == 0x000008, "Wrong alignment on HappyNappo_C_GetDiscoverdCurrentMapCount");
static_assert(sizeof(HappyNappo_C_GetDiscoverdCurrentMapCount) == 0x000288, "Wrong size on HappyNappo_C_GetDiscoverdCurrentMapCount");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, IDs) == 0x000000, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::IDs' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CurrenMapMasterData) == 0x000010, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CurrenMapMasterData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, DiscoverdCount) == 0x000020, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::DiscoverdCount' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, Ret) == 0x000024, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::Ret' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, Temp_int_Variable) == 0x000040, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Array_Get_Item) == 0x000048, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F0, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, K2Node_MakeStruct_FormatArgumentData_2) == 0x000130, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000170, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, K2Node_MakeStruct_FormatArgumentData_3) == 0x000188, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, Temp_int_Loop_Counter_Variable_1) == 0x0001C8, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001CC, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001D0, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, Temp_int_Array_Index_Variable_1) == 0x0001D4, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Array_Get_Item_1) == 0x0001D8, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001E8, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000200, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, K2Node_MakeStruct_FormatArgumentData_4) == 0x000208, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, K2Node_MakeArray_Array) == 0x000248, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Format_ReturnValue) == 0x000258, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Conv_TextToString_ReturnValue) == 0x000270, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(HappyNappo_C_GetDiscoverdCurrentMapCount, CallFunc_Add_IntInt_ReturnValue_2) == 0x000280, "Member 'HappyNappo_C_GetDiscoverdCurrentMapCount::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

}

