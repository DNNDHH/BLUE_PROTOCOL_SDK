#pragma once

 

// Package: EventShopTabBox_Banner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopTabBox_Banner.EventShopTabBox_Banner_C
// 0x00A0 (0x0318 - 0x0278)
class UEventShopTabBox_Banner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Banner;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_black;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_New;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBBtn_Hit;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Sample;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   DataTableName;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabIndex;                                          // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B47[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EventId;                                           // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B48[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Banner;                                            // 0x02F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void ExecuteUbergraph_EventShopTabBox_Banner(int32 EntryPoint);
	void LoadTexture2D(TSoftObjectPtr<class UTexture2D> Texture);
	void BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6(class UObject* Loaded);
	void SetBtnSelected(bool IsSelect);
	void SetEventInfo(int32 Param_EventId);
	void GetBannerTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture);
	void SetNewIcon(bool IsNew);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopTabBox_Banner_C">();
	}
	static class UEventShopTabBox_Banner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopTabBox_Banner_C>();
	}
};
static_assert(alignof(UEventShopTabBox_Banner_C) == 0x000008, "Wrong alignment on UEventShopTabBox_Banner_C");
static_assert(sizeof(UEventShopTabBox_Banner_C) == 0x000318, "Wrong size on UEventShopTabBox_Banner_C");
static_assert(offsetof(UEventShopTabBox_Banner_C, UberGraphFrame) == 0x000278, "Member 'UEventShopTabBox_Banner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, Img_Banner) == 0x000280, "Member 'UEventShopTabBox_Banner_C::Img_Banner' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, Img_black) == 0x000288, "Member 'UEventShopTabBox_Banner_C::Img_black' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, Img_New) == 0x000290, "Member 'UEventShopTabBox_Banner_C::Img_New' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, SBBtn_Hit) == 0x000298, "Member 'UEventShopTabBox_Banner_C::SBBtn_Hit' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, Txt_Sample) == 0x0002A0, "Member 'UEventShopTabBox_Banner_C::Txt_Sample' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, OnClicked) == 0x0002A8, "Member 'UEventShopTabBox_Banner_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, DataTableName) == 0x0002B8, "Member 'UEventShopTabBox_Banner_C::DataTableName' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, TabIndex) == 0x0002C0, "Member 'UEventShopTabBox_Banner_C::TabIndex' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, OnHovered) == 0x0002C8, "Member 'UEventShopTabBox_Banner_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, OnUnhovered) == 0x0002D8, "Member 'UEventShopTabBox_Banner_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, EventId) == 0x0002E8, "Member 'UEventShopTabBox_Banner_C::EventId' has a wrong offset!");
static_assert(offsetof(UEventShopTabBox_Banner_C, Banner) == 0x0002F0, "Member 'UEventShopTabBox_Banner_C::Banner' has a wrong offset!");

}

