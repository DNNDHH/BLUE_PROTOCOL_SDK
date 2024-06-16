#pragma once

 

// Package: ImagineCraftDesc

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineCraftDesc.ImagineCraftDesc_C.ExecuteUbergraph_ImagineCraftDesc
// 0x01A8 (0x01A8 - 0x0000)
struct ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C87[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C88[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_MakeStruct_CharacterCraftRecepi;            // 0x0034(0x0008)(NoDestructor)
	uint8                                         Pad_6C89[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   K2Node_CustomEvent_RecepiData;                     // 0x0040(0x0038)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C8A[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0088(0x00B0)()
	int32                                         CallFunc_CalclateMoney_Money;                      // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalclateMoney_isLiquidMemomryActive;      // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CalclateMoney_IsDiscount;                 // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C8B[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0140(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0158(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0180(0x0028)()
};
static_assert(alignof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc) == 0x000008, "Wrong alignment on ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc");
static_assert(sizeof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc) == 0x0001A8, "Wrong size on ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, EntryPoint) == 0x000000, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, Temp_bool_Variable) == 0x000030, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, K2Node_MakeStruct_CharacterCraftRecepi) == 0x000034, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::K2Node_MakeStruct_CharacterCraftRecepi' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, K2Node_CustomEvent_RecepiData) == 0x000040, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::K2Node_CustomEvent_RecepiData' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_GetMasterDataManager_IsValid) == 0x000078, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_FindMasterImagine_ReturnValue) == 0x000088, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_CalclateMoney_Money) == 0x000138, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_CalclateMoney_Money' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_CalclateMoney_isLiquidMemomryActive) == 0x00013C, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_CalclateMoney_isLiquidMemomryActive' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_CalclateMoney_IsDiscount) == 0x00013D, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_CalclateMoney_IsDiscount' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, CallFunc_Conv_IntToText_ReturnValue) == 0x000140, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, K2Node_MakeStruct_SlateColor_1) == 0x000158, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc, K2Node_Select_Default) == 0x000180, "Member 'ImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc::K2Node_Select_Default' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.SetRecepiData
// 0x0038 (0x0038 - 0x0000)
struct ImagineCraftDesc_C_SetRecepiData final
{
public:
	struct FMasterImagineRecepi                   Param_RecepiData;                                  // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineCraftDesc_C_SetRecepiData) == 0x000008, "Wrong alignment on ImagineCraftDesc_C_SetRecepiData");
static_assert(sizeof(ImagineCraftDesc_C_SetRecepiData) == 0x000038, "Wrong size on ImagineCraftDesc_C_SetRecepiData");
static_assert(offsetof(ImagineCraftDesc_C_SetRecepiData, Param_RecepiData) == 0x000000, "Member 'ImagineCraftDesc_C_SetRecepiData::Param_RecepiData' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.GenerateMaterialData
// 0x0038 (0x0038 - 0x0000)
struct ImagineCraftDesc_C_GenerateMaterialData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C8C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineMaterialsItem_C*                CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item;                           // 0x0018(0x000C)(NoDestructor)
	uint8                                         Pad_6C8D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraftDesc_C_GenerateMaterialData) == 0x000008, "Wrong alignment on ImagineCraftDesc_C_GenerateMaterialData");
static_assert(sizeof(ImagineCraftDesc_C_GenerateMaterialData) == 0x000038, "Wrong size on ImagineCraftDesc_C_GenerateMaterialData");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ImagineCraftDesc_C_GenerateMaterialData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ImagineCraftDesc_C_GenerateMaterialData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ImagineCraftDesc_C_GenerateMaterialData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, CallFunc_Create_ReturnValue) == 0x000010, "Member 'ImagineCraftDesc_C_GenerateMaterialData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, CallFunc_Array_Get_Item) == 0x000018, "Member 'ImagineCraftDesc_C_GenerateMaterialData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'ImagineCraftDesc_C_GenerateMaterialData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'ImagineCraftDesc_C_GenerateMaterialData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GenerateMaterialData, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'ImagineCraftDesc_C_GenerateMaterialData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.CalclateMoney
// 0x0098 (0x0098 - 0x0000)
struct ImagineCraftDesc_C_CalclateMoney final
{
public:
	int32                                         Money;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLiquidMemomryActive;                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDiscount;                                        // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C8E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WorkCostReduction;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RewardBoostCostReduction;                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRewardBoostActive;                                // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C8F[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C90[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C91[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C92[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0048(0x0028)(NoDestructor)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C93[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImagineCraftCostReduction_CostReduction; // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetImagineCraftCostReduction_ReturnValue; // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C94[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftDesc_C_CalclateMoney) == 0x000008, "Wrong alignment on ImagineCraftDesc_C_CalclateMoney");
static_assert(sizeof(ImagineCraftDesc_C_CalclateMoney) == 0x000098, "Wrong size on ImagineCraftDesc_C_CalclateMoney");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, Money) == 0x000000, "Member 'ImagineCraftDesc_C_CalclateMoney::Money' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, IsLiquidMemomryActive) == 0x000004, "Member 'ImagineCraftDesc_C_CalclateMoney::IsLiquidMemomryActive' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, IsDiscount) == 0x000005, "Member 'ImagineCraftDesc_C_CalclateMoney::IsDiscount' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, WorkCostReduction) == 0x000008, "Member 'ImagineCraftDesc_C_CalclateMoney::WorkCostReduction' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, RewardBoostCostReduction) == 0x00000C, "Member 'ImagineCraftDesc_C_CalclateMoney::RewardBoostCostReduction' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, bRewardBoostActive) == 0x000010, "Member 'ImagineCraftDesc_C_CalclateMoney::bRewardBoostActive' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, Temp_bool_Variable) == 0x000011, "Member 'ImagineCraftDesc_C_CalclateMoney::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, Temp_float_Variable) == 0x000014, "Member 'ImagineCraftDesc_C_CalclateMoney::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetNetworkDataCache_IsValid) == 0x000028, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000030, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000038, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x000040, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000048, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid) == 0x000070, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_OutIsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue) == 0x000074, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000078, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00007C, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetImagineCraftCostReduction_CostReduction) == 0x000080, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetImagineCraftCostReduction_CostReduction' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_GetImagineCraftCostReduction_ReturnValue) == 0x000084, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_GetImagineCraftCostReduction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_FFloor_ReturnValue) == 0x000088, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, K2Node_Select_Default) == 0x00008C, "Member 'ImagineCraftDesc_C_CalclateMoney::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_CalclateMoney, CallFunc_Add_FloatFloat_ReturnValue) == 0x000090, "Member 'ImagineCraftDesc_C_CalclateMoney::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.PerkListGenerate
// 0x01E0 (0x01E0 - 0x0000)
struct ImagineCraftDesc_C_PerkListGenerate final
{
public:
	struct FSBMasterImagine                       InImagineMaster;                                   // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FMasterImaginePerkTable                PerkTable;                                         // 0x00B0(0x0048)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterManager;                                     // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0106(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C95[0x1];                                     // 0x0107(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C96[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C97[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C98[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImagineCraftRecepiPerkItem_C*          K2Node_Select_Default;                             // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C99[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImaginePerkTable                CallFunc_FindMasterImaginePerk_ReturnValue;        // 0x0138(0x0048)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C9A[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C9B[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C9C[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C9D[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x01A4(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftDesc_C_PerkListGenerate) == 0x000008, "Wrong alignment on ImagineCraftDesc_C_PerkListGenerate");
static_assert(sizeof(ImagineCraftDesc_C_PerkListGenerate) == 0x0001E0, "Wrong size on ImagineCraftDesc_C_PerkListGenerate");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, InImagineMaster) == 0x000000, "Member 'ImagineCraftDesc_C_PerkListGenerate::InImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, PerkTable) == 0x0000B0, "Member 'ImagineCraftDesc_C_PerkListGenerate::PerkTable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, MasterManager) == 0x0000F8, "Member 'ImagineCraftDesc_C_PerkListGenerate::MasterManager' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_int_Variable) == 0x000100, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_bool_Variable) == 0x000104, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_byte_Variable) == 0x000105, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_byte_Variable_1) == 0x000106, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_int_Variable_1) == 0x000108, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00010C, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_Add_IntInt_ReturnValue) == 0x000110, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_bool_Variable_1) == 0x000114, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_int_Variable_2) == 0x000118, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, Temp_bool_Variable_2) == 0x00011C, "Member 'ImagineCraftDesc_C_PerkListGenerate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000120, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x000124, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, K2Node_Select_Default) == 0x000128, "Member 'ImagineCraftDesc_C_PerkListGenerate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000130, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_FindMasterImaginePerk_ReturnValue) == 0x000138, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_FindMasterImaginePerk_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000180, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, K2Node_Select_Default_1) == 0x000184, "Member 'ImagineCraftDesc_C_PerkListGenerate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_Less_FloatFloat_ReturnValue) == 0x000188, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, K2Node_Select_Default_2) == 0x00018C, "Member 'ImagineCraftDesc_C_PerkListGenerate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_GetMasterDataManager_IsValid) == 0x000190, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_GetMasterDataManager_ReturnValue) == 0x000198, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0001A0, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0001A4, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0001C8, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001D8, "Member 'ImagineCraftDesc_C_PerkListGenerate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_PerkListGenerate, K2Node_Select_Default_3) == 0x0001D9, "Member 'ImagineCraftDesc_C_PerkListGenerate::K2Node_Select_Default_3' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.GetStorage
// 0x0008 (0x0008 - 0x0000)
struct ImagineCraftDesc_C_GetStorage final
{
public:
	int32                                         StorageNo;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectStorageNo_StorageNo;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftDesc_C_GetStorage) == 0x000004, "Wrong alignment on ImagineCraftDesc_C_GetStorage");
static_assert(sizeof(ImagineCraftDesc_C_GetStorage) == 0x000008, "Wrong size on ImagineCraftDesc_C_GetStorage");
static_assert(offsetof(ImagineCraftDesc_C_GetStorage, StorageNo) == 0x000000, "Member 'ImagineCraftDesc_C_GetStorage::StorageNo' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_GetStorage, CallFunc_GetSelectStorageNo_StorageNo) == 0x000004, "Member 'ImagineCraftDesc_C_GetStorage::CallFunc_GetSelectStorageNo_StorageNo' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.IsStorage
// 0x0002 (0x0002 - 0x0000)
struct ImagineCraftDesc_C_IsStorage final
{
public:
	bool                                          CurrentIsStorage;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStorage_CurrentIsStorage;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraftDesc_C_IsStorage) == 0x000001, "Wrong alignment on ImagineCraftDesc_C_IsStorage");
static_assert(sizeof(ImagineCraftDesc_C_IsStorage) == 0x000002, "Wrong size on ImagineCraftDesc_C_IsStorage");
static_assert(offsetof(ImagineCraftDesc_C_IsStorage, CurrentIsStorage) == 0x000000, "Member 'ImagineCraftDesc_C_IsStorage::CurrentIsStorage' has a wrong offset!");
static_assert(offsetof(ImagineCraftDesc_C_IsStorage, CallFunc_IsStorage_CurrentIsStorage) == 0x000001, "Member 'ImagineCraftDesc_C_IsStorage::CallFunc_IsStorage_CurrentIsStorage' has a wrong offset!");

// Function ImagineCraftDesc.ImagineCraftDesc_C.UpdateSkills
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraftDesc_C_UpdateSkills final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraftDesc_C_UpdateSkills) == 0x000001, "Wrong alignment on ImagineCraftDesc_C_UpdateSkills");
static_assert(sizeof(ImagineCraftDesc_C_UpdateSkills) == 0x000001, "Wrong size on ImagineCraftDesc_C_UpdateSkills");
static_assert(offsetof(ImagineCraftDesc_C_UpdateSkills, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'ImagineCraftDesc_C_UpdateSkills::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

