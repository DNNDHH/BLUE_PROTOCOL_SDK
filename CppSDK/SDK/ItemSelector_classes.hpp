#pragma once

 

// Package: ItemSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemSelector.ItemSelector_C
// 0x0028 (0x0308 - 0x02E0)
class UItemSelector_C final : public USBItemSelector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UShortcutCoolTime_C*                    CoolTime;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TextLeft;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TextRight;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TextUse;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemSelector(int32 EntryPoint);
	void EventSetupList();
	void UnbindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget);
	void BindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget);
	void BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature();
	void BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature();
	void BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature();
	void BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature();
	void BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature();
	void BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature();
	void BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
	void BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
	void BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
	void CustomEvent_4(class UObject* Sender, class UObject* Param);
	void UnbindUpdateShortcut();
	void BindUpdateShortcut();
	void CustomEvent_3(class UObject* Sender, class UObject* Param);
	void UnbindPlayerClassChange();
	void BindPlayerClassChange();
	void CustomEvent_1(class UObject* Sender, class UObject* Param);
	void UnbindClassLevelUp();
	void BindClassLevelUp();
	void UnbindUseSupply();
	void BindUseSupply();
	void EventOnUseSupply(const bool Result);
	void UnbindOwnItemChangeAmount();
	void BindOwnItemChangeAmount();
	void OnOwnItemChangeAmount(const struct FSBChangeItemAmountParam& InParam);
	void OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void UnbindSaveItemStorage();
	void BindSaveItemStorage();
	void UnbindSaveItemLock();
	void BindSaveItemLock();
	void OnSaveItemLock(const bool Result, const TArray<struct FSBLockItemData>& LockItemData, const int32 InRetCode);
	void DebugPrint(const class FString& InStr, float Duration);
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnShowCoolTime();
	void OnHiddenCoolTime();
	void SetupKeyTextUse();
	void SetupKeyTextLeft();
	void SetupKeyTextRight();
	void OnPlaySESelect();
	void OnPlaySECanNotUse(ESBItemUseStatus InUseStatus);
	void OnUseItem();

	bool IsRegistItemForInventoryData(const struct FOwnItemInfo& InItemInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSelector_C">();
	}
	static class UItemSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSelector_C>();
	}
};
static_assert(alignof(UItemSelector_C) == 0x000008, "Wrong alignment on UItemSelector_C");
static_assert(sizeof(UItemSelector_C) == 0x000308, "Wrong size on UItemSelector_C");
static_assert(offsetof(UItemSelector_C, UberGraphFrame) == 0x0002E0, "Member 'UItemSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemSelector_C, CoolTime) == 0x0002E8, "Member 'UItemSelector_C::CoolTime' has a wrong offset!");
static_assert(offsetof(UItemSelector_C, TextLeft) == 0x0002F0, "Member 'UItemSelector_C::TextLeft' has a wrong offset!");
static_assert(offsetof(UItemSelector_C, TextRight) == 0x0002F8, "Member 'UItemSelector_C::TextRight' has a wrong offset!");
static_assert(offsetof(UItemSelector_C, TextUse) == 0x000300, "Member 'UItemSelector_C::TextUse' has a wrong offset!");

}

