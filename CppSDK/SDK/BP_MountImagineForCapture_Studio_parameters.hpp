#pragma once

 

// Package: BP_MountImagineForCapture_Studio

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MountImagineForCapture_Studio.BP_MountImagineForCapture_Studio_C.ExecuteUbergraph_BP_MountImagineForCapture_Studio
// 0x0040 (0x0040 - 0x0000)
struct BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InImagineItemId;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B87[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MountImagineForCapture_C*           K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B88[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MountImagineForCapture_C*           K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_1; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio) == 0x000008, "Wrong alignment on BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio");
static_assert(sizeof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio) == 0x000040, "Wrong size on BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, EntryPoint) == 0x000000, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_CustomEvent_InImagineItemId) == 0x000014, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_CustomEvent_InImagineItemId' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_CustomEvent_bResult) == 0x000018, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_CustomEvent_bResult' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture) == 0x000020, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_1) == 0x000030, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_MountImagineForCapture_Studio_C_ExecuteUbergraph_BP_MountImagineForCapture_Studio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_MountImagineForCapture_Studio.BP_MountImagineForCapture_Studio_C.OnSetImagineData_Event_0
// 0x0001 (0x0001 - 0x0000)
struct BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0 final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0) == 0x000001, "Wrong alignment on BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0");
static_assert(sizeof(BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0) == 0x000001, "Wrong size on BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0, bResult) == 0x000000, "Member 'BP_MountImagineForCapture_Studio_C_OnSetImagineData_Event_0::bResult' has a wrong offset!");

// Function BP_MountImagineForCapture_Studio.BP_MountImagineForCapture_Studio_C.LoadMountImagineAsset
// 0x0004 (0x0004 - 0x0000)
struct BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset) == 0x000004, "Wrong alignment on BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset");
static_assert(sizeof(BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset) == 0x000004, "Wrong size on BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset");
static_assert(offsetof(BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset, InImagineItemId) == 0x000000, "Member 'BP_MountImagineForCapture_Studio_C_LoadMountImagineAsset::InImagineItemId' has a wrong offset!");

}

