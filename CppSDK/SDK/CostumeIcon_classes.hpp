#pragma once

 

// Package: CostumeIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CharaParts_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CostumeIcon.CostumeIcon_C
// 0x0060 (0x02D8 - 0x0278)
class UCostumeIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DefaultIcon;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_48;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             IconTexture;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ItemIndex;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534A[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedCostumeIcon;                              // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 MountImagineId;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void ExecuteUbergraph_CostumeIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void SetMountImagineData(int32 InItemIndex, const class FString& InUniqueId, const class FString& Param_MountImagineId);
	void SetCostumeData(int32 Param_ItemIndex, const class FString& Param_UniqueId, const struct FCostumeData& CostumeData);
	void SetColorIconBage(const struct FCostumeData& CostumeData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CostumeIcon_C">();
	}
	static class UCostumeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCostumeIcon_C>();
	}
};
static_assert(alignof(UCostumeIcon_C) == 0x000008, "Wrong alignment on UCostumeIcon_C");
static_assert(sizeof(UCostumeIcon_C) == 0x0002D8, "Wrong size on UCostumeIcon_C");
static_assert(offsetof(UCostumeIcon_C, UberGraphFrame) == 0x000278, "Member 'UCostumeIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, CommonIcon) == 0x000280, "Member 'UCostumeIcon_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, DefaultIcon) == 0x000288, "Member 'UCostumeIcon_C::DefaultIcon' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, WidgetSwitcher_48) == 0x000290, "Member 'UCostumeIcon_C::WidgetSwitcher_48' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, IconTexture) == 0x000298, "Member 'UCostumeIcon_C::IconTexture' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, ItemIndex) == 0x0002A0, "Member 'UCostumeIcon_C::ItemIndex' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, UniqueId) == 0x0002A8, "Member 'UCostumeIcon_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, OnClickedCostumeIcon) == 0x0002B8, "Member 'UCostumeIcon_C::OnClickedCostumeIcon' has a wrong offset!");
static_assert(offsetof(UCostumeIcon_C, MountImagineId) == 0x0002C8, "Member 'UCostumeIcon_C::MountImagineId' has a wrong offset!");

}

