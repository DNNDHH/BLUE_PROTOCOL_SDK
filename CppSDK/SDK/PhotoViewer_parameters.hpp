#pragma once

 

// Package: PhotoViewer

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PhotoViewer.PhotoViewer_C.ExecuteUbergraph_PhotoViewer
// 0x00C0 (0x00C0 - 0x0000)
struct PhotoViewer_C_ExecuteUbergraph_PhotoViewer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0038(0x0088)()
};
static_assert(alignof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer) == 0x000008, "Wrong alignment on PhotoViewer_C_ExecuteUbergraph_PhotoViewer");
static_assert(sizeof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer) == 0x0000C0, "Wrong size on PhotoViewer_C_ExecuteUbergraph_PhotoViewer");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, EntryPoint) == 0x000000, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::EntryPoint' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, K2Node_CustomEvent_URL) == 0x000008, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_DownloadImage_ReturnValue) == 0x000018, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_IsEmpty_ReturnValue) == 0x000029, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00002B, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002C, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhotoViewer_C_ExecuteUbergraph_PhotoViewer, K2Node_MakeStruct_SlateBrush) == 0x000038, "Member 'PhotoViewer_C_ExecuteUbergraph_PhotoViewer::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function PhotoViewer.PhotoViewer_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct PhotoViewer_C_SetData final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PhotoViewer_C_SetData) == 0x000008, "Wrong alignment on PhotoViewer_C_SetData");
static_assert(sizeof(PhotoViewer_C_SetData) == 0x000010, "Wrong size on PhotoViewer_C_SetData");
static_assert(offsetof(PhotoViewer_C_SetData, URL) == 0x000000, "Member 'PhotoViewer_C_SetData::URL' has a wrong offset!");

}

