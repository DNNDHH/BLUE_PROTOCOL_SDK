#pragma once

 

// Package: ImagineView

#include "Basic.hpp"


namespace SDK::Params
{

// Function ImagineView.ImagineView_C.ExecuteUbergraph_ImagineView
// 0x0080 (0x0080 - 0x0000)
struct ImagineView_C_ExecuteUbergraph_ImagineView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_ImagineID;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ABB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetImagineFullTexture_ReturnValue;        // 0x0020(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ABC[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ABD[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineView_C_ExecuteUbergraph_ImagineView) == 0x000008, "Wrong alignment on ImagineView_C_ExecuteUbergraph_ImagineView");
static_assert(sizeof(ImagineView_C_ExecuteUbergraph_ImagineView) == 0x000080, "Wrong size on ImagineView_C_ExecuteUbergraph_ImagineView");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, EntryPoint) == 0x000000, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, K2Node_CustomEvent_ImagineID) == 0x000014, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::K2Node_CustomEvent_ImagineID' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, CallFunc_PlaySE_ReturnValue) == 0x000018, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, CallFunc_GetImagineFullTexture_ReturnValue) == 0x000020, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::CallFunc_GetImagineFullTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000048, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, Temp_object_Variable) == 0x000050, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, K2Node_DynamicCast_AsTexture_2D) == 0x000058, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, K2Node_CustomEvent_Loaded) == 0x000068, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineView_C_ExecuteUbergraph_ImagineView, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'ImagineView_C_ExecuteUbergraph_ImagineView::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function ImagineView.ImagineView_C.SetImagineId
// 0x0004 (0x0004 - 0x0000)
struct ImagineView_C_SetImagineId final
{
public:
	int32                                         ImagineId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineView_C_SetImagineId) == 0x000004, "Wrong alignment on ImagineView_C_SetImagineId");
static_assert(sizeof(ImagineView_C_SetImagineId) == 0x000004, "Wrong size on ImagineView_C_SetImagineId");
static_assert(offsetof(ImagineView_C_SetImagineId, ImagineId) == 0x000000, "Member 'ImagineView_C_SetImagineId::ImagineId' has a wrong offset!");

// Function ImagineView.ImagineView_C.OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1
// 0x0008 (0x0008 - 0x0000)
struct ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1) == 0x000008, "Wrong alignment on ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1");
static_assert(sizeof(ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1) == 0x000008, "Wrong size on ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1");
static_assert(offsetof(ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1, Loaded) == 0x000000, "Member 'ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1::Loaded' has a wrong offset!");

}

