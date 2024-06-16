#pragma once

 

// Package: ImagineCraftResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineCraftResult.ImagineCraftResult_C
// 0x0198 (0x0410 - 0x0278)
class UImagineCraftResult_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineActiveResult_C*                 ImagineActiveResult;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImaginePassiveResult_C*                ImaginePassiveResult;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ParamSwitch;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Icon;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 UniqueId;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsLoading;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7E[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           ResultOwnItem;                                     // 0x02F0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         StorageNo;                                         // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClosed__DelegateSignature(bool IsCloseAll);
	void ExecuteUbergraph_ImagineCraftResult(int32 EntryPoint);
	void Show();
	void OnCloseDialog(EDialogResult Result);
	void CloseDialog();
	void Close();
	void SetUID(const class FString& Param_UniqueId);
	void Set_Storageno(int32 Param_StorageNo);
	void SetText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineCraftResult_C">();
	}
	static class UImagineCraftResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineCraftResult_C>();
	}
};
static_assert(alignof(UImagineCraftResult_C) == 0x000008, "Wrong alignment on UImagineCraftResult_C");
static_assert(sizeof(UImagineCraftResult_C) == 0x000410, "Wrong size on UImagineCraftResult_C");
static_assert(offsetof(UImagineCraftResult_C, UberGraphFrame) == 0x000278, "Member 'UImagineCraftResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, InAnim) == 0x000280, "Member 'UImagineCraftResult_C::InAnim' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, Image_103) == 0x000288, "Member 'UImagineCraftResult_C::Image_103' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, ImagineActiveResult) == 0x000290, "Member 'UImagineCraftResult_C::ImagineActiveResult' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, ImaginePassiveResult) == 0x000298, "Member 'UImagineCraftResult_C::ImaginePassiveResult' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, Img_Bag) == 0x0002A0, "Member 'UImagineCraftResult_C::Img_Bag' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, Img_Storage) == 0x0002A8, "Member 'UImagineCraftResult_C::Img_Storage' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, ParamSwitch) == 0x0002B0, "Member 'UImagineCraftResult_C::ParamSwitch' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, Txt_Name) == 0x0002B8, "Member 'UImagineCraftResult_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, WS_Icon) == 0x0002C0, "Member 'UImagineCraftResult_C::WS_Icon' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, UniqueId) == 0x0002C8, "Member 'UImagineCraftResult_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, IsLoading) == 0x0002D8, "Member 'UImagineCraftResult_C::IsLoading' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, OnClosed) == 0x0002E0, "Member 'UImagineCraftResult_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, ResultOwnItem) == 0x0002F0, "Member 'UImagineCraftResult_C::ResultOwnItem' has a wrong offset!");
static_assert(offsetof(UImagineCraftResult_C, StorageNo) == 0x000408, "Member 'UImagineCraftResult_C::StorageNo' has a wrong offset!");

}

