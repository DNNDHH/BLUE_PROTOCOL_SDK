#pragma once

 

// Package: UMG_LiquidMemory_ForInventory

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecuteUbergraph_UMG_LiquidMemory_ForInventory
// 0x0238 (0x0238 - 0x0000)
struct UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5815[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryItem_C*                K2Node_DynamicCast_AsUMG_Liquid_Memory_Item;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5816[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5817[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5818[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5819[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581A[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1; // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581B[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581C[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryMasterData>      CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue; // 0x00C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x00D8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581D[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            K2Node_CustomEvent_InUpdatedLiquidMemoryInfos;     // 0x00E0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00F0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581E[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581F[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5820[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryItem_C*                CallFunc_Create_ReturnValue;                       // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5821[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOwnLiquidMemoryNum_ReturnValue;        // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5822[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            CallFunc_GetLiquidMemoryInfos_ReturnValue;         // 0x0158(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5823[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item;                           // 0x0170(0x0028)(NoDestructor)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5824[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryItem_C*                K2Node_DynamicCast_AsUMG_Liquid_Memory_Item_1;     // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5825[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C8(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5826[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item_1;                         // 0x01F8(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateBonusStatus_Visible;                // 0x0225(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5827[0x2];                                     // 0x0226(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory) == 0x000008, "Wrong alignment on UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory");
static_assert(sizeof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory) == 0x000238, "Wrong size on UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, EntryPoint) == 0x000000, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, Temp_int_Loop_Counter_Variable_1) == 0x000008, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_DynamicCast_AsUMG_Liquid_Memory_Item) == 0x000028, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_DynamicCast_AsUMG_Liquid_Memory_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, Temp_int_Variable) == 0x000034, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue) == 0x000058, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_3) == 0x000061, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000078, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_CreateDelegate_OutputDelegate_2) == 0x000080, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_4) == 0x000090, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1) == 0x000098, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_5) == 0x0000A0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_MakeStruct_Margin) == 0x0000A4, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetMasterDataManager_IsValid) == 0x0000B4, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue) == 0x0000C0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_BP_GetLiquidMemoryMasterDataArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D4, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_CustomEvent_InRetCode_1) == 0x0000D8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_CustomEvent_InUpdatedLiquidMemoryInfos) == 0x0000E0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_CustomEvent_InUpdatedLiquidMemoryInfos' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000F0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000100, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_6) == 0x000120, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Array_Length_ReturnValue_1) == 0x000124, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Create_ReturnValue) == 0x000130, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000138, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetNetworkDataCache_IsValid) == 0x000140, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000148, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetOwnLiquidMemoryNum_ReturnValue) == 0x000150, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetOwnLiquidMemoryNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetLiquidMemoryInfos_ReturnValue) == 0x000158, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetLiquidMemoryInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Greater_IntInt_ReturnValue) == 0x000168, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_7) == 0x000169, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, Temp_int_Array_Index_Variable_1) == 0x00016C, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Array_Get_Item) == 0x000170, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetChildAt_ReturnValue_1) == 0x000198, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_8) == 0x0001A0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_DynamicCast_AsUMG_Liquid_Memory_Item_1) == 0x0001A8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_DynamicCast_AsUMG_Liquid_Memory_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001B8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0001E0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0001E8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, K2Node_CustomEvent_InRetCode) == 0x0001F0, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_IsValid_ReturnValue_9) == 0x0001F4, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Array_Get_Item_1) == 0x0001F8, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Array_Length_ReturnValue_2) == 0x000220, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Less_IntInt_ReturnValue_1) == 0x000224, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_UpdateBonusStatus_Visible) == 0x000225, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_UpdateBonusStatus_Visible' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, Temp_int_Variable_1) == 0x000228, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_Add_IntInt_ReturnValue_2) == 0x00022C, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000230, "Member 'UMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdateComplete
// 0x0004 (0x0004 - 0x0000)
struct UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete) == 0x000004, "Wrong alignment on UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete");
static_assert(sizeof(UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete) == 0x000004, "Wrong size on UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete, InRetCode) == 0x000000, "Member 'UMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete::InRetCode' has a wrong offset!");

// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.OnAccumulateLiquidMemory_Event
// 0x0018 (0x0018 - 0x0000)
struct UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5828[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            InUpdatedLiquidMemoryInfos;                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event) == 0x000008, "Wrong alignment on UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event");
static_assert(sizeof(UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event) == 0x000018, "Wrong size on UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event, InRetCode) == 0x000000, "Member 'UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event::InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event, InUpdatedLiquidMemoryInfos) == 0x000008, "Member 'UMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event::InUpdatedLiquidMemoryInfos' has a wrong offset!");

// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Open
// 0x0020 (0x0020 - 0x0000)
struct UMG_LiquidMemory_ForInventory_C_Open final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5829[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemory_ForInventory_C_Open) == 0x000008, "Wrong alignment on UMG_LiquidMemory_ForInventory_C_Open");
static_assert(sizeof(UMG_LiquidMemory_ForInventory_C_Open) == 0x000020, "Wrong size on UMG_LiquidMemory_ForInventory_C_Open");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_Open, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemory_ForInventory_C_Open::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_Open, CallFunc_Not_PreBool_ReturnValue_1) == 0x000001, "Member 'UMG_LiquidMemory_ForInventory_C_Open::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_Open, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemory_ForInventory_C_Open::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_Open, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemory_ForInventory_C_Open::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_Open, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemory_ForInventory_C_Open::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_Open, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'UMG_LiquidMemory_ForInventory_C_Open::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.SetLiquidMemoryListItemNum
// 0x0060 (0x0060 - 0x0000)
struct UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum final
{
public:
	int32                                         InItemNum;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpItemNum;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_582A[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_582B[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_582C[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_582D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum) == 0x000008, "Wrong alignment on UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum");
static_assert(sizeof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum) == 0x000060, "Wrong size on UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, InItemNum) == 0x000000, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::InItemNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, TmpItemNum) == 0x000004, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::TmpItemNum' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, Temp_byte_Variable) == 0x000008, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, Temp_byte_Variable_1) == 0x000009, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, Temp_bool_Variable) == 0x000018, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Less_IntInt_ReturnValue) == 0x000019, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Array_Get_Item) == 0x000030, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, K2Node_Select_Default) == 0x000038, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Less_IntInt_ReturnValue_1) == 0x000040, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_GetAllChildren_ReturnValue_1) == 0x000048, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_Greater_IntInt_ReturnValue) == 0x00005C, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum, CallFunc_IsValid_ReturnValue_1) == 0x00005D, "Member 'UMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

