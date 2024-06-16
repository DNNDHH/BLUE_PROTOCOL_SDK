#pragma once

 

// Package: BP_ImagineForCapture_Studio

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ExecuteUbergraph_BP_ImagineForCapture_Studio
// 0x0038 (0x0038 - 0x0000)
struct BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InImagineItemId;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ImagineForCapture_C*                K2Node_DynamicCast_AsBP_Imagine_for_Capture;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68AD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ImagineForCapture_C*                K2Node_DynamicCast_AsBP_Imagine_for_Capture_1;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio) == 0x000008, "Wrong alignment on BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio");
static_assert(sizeof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio) == 0x000038, "Wrong size on BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, EntryPoint) == 0x000000, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_CustomEvent_InImagineItemId) == 0x000014, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_CustomEvent_InImagineItemId' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_DynamicCast_AsBP_Imagine_for_Capture) == 0x000018, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_DynamicCast_AsBP_Imagine_for_Capture' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_DynamicCast_AsBP_Imagine_for_Capture_1) == 0x000028, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_DynamicCast_AsBP_Imagine_for_Capture_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio, K2Node_CustomEvent_bResult) == 0x000031, "Member 'BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio::K2Node_CustomEvent_bResult' has a wrong offset!");

// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.OnSetImagineData_Event_0
// 0x0001 (0x0001 - 0x0000)
struct BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0 final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0) == 0x000001, "Wrong alignment on BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0");
static_assert(sizeof(BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0) == 0x000001, "Wrong size on BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0, bResult) == 0x000000, "Member 'BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0::bResult' has a wrong offset!");

// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.LoadImagineAsset
// 0x0004 (0x0004 - 0x0000)
struct BP_ImagineForCapture_Studio_C_LoadImagineAsset final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ImagineForCapture_Studio_C_LoadImagineAsset) == 0x000004, "Wrong alignment on BP_ImagineForCapture_Studio_C_LoadImagineAsset");
static_assert(sizeof(BP_ImagineForCapture_Studio_C_LoadImagineAsset) == 0x000004, "Wrong size on BP_ImagineForCapture_Studio_C_LoadImagineAsset");
static_assert(offsetof(BP_ImagineForCapture_Studio_C_LoadImagineAsset, InImagineItemId) == 0x000000, "Member 'BP_ImagineForCapture_Studio_C_LoadImagineAsset::InImagineItemId' has a wrong offset!");

}

