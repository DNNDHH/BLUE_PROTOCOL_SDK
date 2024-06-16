#pragma once

 

// Package: UMG_PhotoModeControll_UploadListSlot

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot
// 0x0018 (0x0018 - 0x0000)
struct UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C80[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      K2Node_Event_InTexture;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      K2Node_CustomEvent_inTexture;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot");
static_assert(sizeof(UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot) == 0x000018, "Wrong size on UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot, EntryPoint) == 0x000000, "Member 'UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot, K2Node_Event_InTexture) == 0x000008, "Member 'UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot::K2Node_Event_InTexture' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot, K2Node_CustomEvent_inTexture) == 0x000010, "Member 'UMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot::K2Node_CustomEvent_inTexture' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControll_UploadListSlot_C_SetTexture final
{
public:
	class UTexture2DDynamic*                      InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadListSlot_C_SetTexture) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadListSlot_C_SetTexture");
static_assert(sizeof(UMG_PhotoModeControll_UploadListSlot_C_SetTexture) == 0x000008, "Wrong size on UMG_PhotoModeControll_UploadListSlot_C_SetTexture");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_SetTexture, InTexture) == 0x000000, "Member 'UMG_PhotoModeControll_UploadListSlot_C_SetTexture::InTexture' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture_Bp
// 0x0008 (0x0008 - 0x0000)
struct UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp final
{
public:
	class UTexture2DDynamic*                      InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp");
static_assert(sizeof(UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp) == 0x000008, "Wrong size on UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp, InTexture) == 0x000000, "Member 'UMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp::InTexture' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetSlateBrush
// 0x0090 (0x0090 - 0x0000)
struct UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush final
{
public:
	class UObject*                                In_Brush_Image;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
};
static_assert(alignof(UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush");
static_assert(sizeof(UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush) == 0x000090, "Wrong size on UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush, In_Brush_Image) == 0x000000, "Member 'UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush::In_Brush_Image' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'UMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

}

