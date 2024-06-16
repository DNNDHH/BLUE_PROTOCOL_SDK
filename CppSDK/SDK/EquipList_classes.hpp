#pragma once

 

// Package: EquipList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipList.EquipList_C
// 0x0090 (0x0340 - 0x02B0)
class UEquipList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCostumeIcon_C*                         Accessories_BackIcon;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_BottomsIcon;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_EarIcon;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_EyeIcon;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_FaceIcon;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_HeadIcon;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_LeftHandIcon;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Accessories_RightHandIcon;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Costume_BottomsIcon;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Costume_HandIcon;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Costume_HeadIcon;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Costume_ShoesIcon;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Costume_UnderWearIcon;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         Costume_WearIcon;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCostumeIcon_C*                         MountImagineIcon;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedEquipList;                                // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId);
	void ExecuteUbergraph_EquipList(int32 EntryPoint);
	void BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId);
	void SetData(const TArray<struct FOwnItemInfo>& InCostumeOwnItemInfoList, TArray<struct FOwnItemInfo>& InUnderWearOwnItemInfoList, TArray<struct FOwnItemInfo>& InAccesoriesOwnItemInfoList, const struct FOwnItemInfo& InMountImagine);
	void SetArmorData(TArray<struct FOwnItemInfo>& InOwnItemList, class UArmorList_C* InArmorList);
	void SetCostumeData(TArray<struct FOwnItemInfo>& InCostumeData);
	void SetUnderWearData(TArray<struct FOwnItemInfo>& InUnderWearData);
	void SetAccessoriesData(TArray<struct FOwnItemInfo>& InAccessoriesData);
	void SetMountImagineData(const struct FOwnItemInfo& InMountImagine);
	void SetOtherPCData(TArray<struct FOwnItemInfo>& InEquipCostumesOwnItemInfoList, TArray<struct FOwnItemInfo>& InEquipAccessoriesOwnItemInfoList, TArray<struct FOwnItemInfo>& InEquipUnderwearOwnItemInfoList, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo, const struct FOwnItemInfo& InEquipMountImagineOwnItemInfo);
	void SetOtherPCAccessoriesData(TArray<struct FOwnItemInfo>& InAccessoriesData, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipList_C">();
	}
	static class UEquipList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipList_C>();
	}
};
static_assert(alignof(UEquipList_C) == 0x000008, "Wrong alignment on UEquipList_C");
static_assert(sizeof(UEquipList_C) == 0x000340, "Wrong size on UEquipList_C");
static_assert(offsetof(UEquipList_C, UberGraphFrame) == 0x0002B0, "Member 'UEquipList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_BackIcon) == 0x0002B8, "Member 'UEquipList_C::Accessories_BackIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_BottomsIcon) == 0x0002C0, "Member 'UEquipList_C::Accessories_BottomsIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_EarIcon) == 0x0002C8, "Member 'UEquipList_C::Accessories_EarIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_EyeIcon) == 0x0002D0, "Member 'UEquipList_C::Accessories_EyeIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_FaceIcon) == 0x0002D8, "Member 'UEquipList_C::Accessories_FaceIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_HeadIcon) == 0x0002E0, "Member 'UEquipList_C::Accessories_HeadIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_LeftHandIcon) == 0x0002E8, "Member 'UEquipList_C::Accessories_LeftHandIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Accessories_RightHandIcon) == 0x0002F0, "Member 'UEquipList_C::Accessories_RightHandIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Costume_BottomsIcon) == 0x0002F8, "Member 'UEquipList_C::Costume_BottomsIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Costume_HandIcon) == 0x000300, "Member 'UEquipList_C::Costume_HandIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Costume_HeadIcon) == 0x000308, "Member 'UEquipList_C::Costume_HeadIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Costume_ShoesIcon) == 0x000310, "Member 'UEquipList_C::Costume_ShoesIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Costume_UnderWearIcon) == 0x000318, "Member 'UEquipList_C::Costume_UnderWearIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, Costume_WearIcon) == 0x000320, "Member 'UEquipList_C::Costume_WearIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, MountImagineIcon) == 0x000328, "Member 'UEquipList_C::MountImagineIcon' has a wrong offset!");
static_assert(offsetof(UEquipList_C, OnClickedEquipList) == 0x000330, "Member 'UEquipList_C::OnClickedEquipList' has a wrong offset!");

}

