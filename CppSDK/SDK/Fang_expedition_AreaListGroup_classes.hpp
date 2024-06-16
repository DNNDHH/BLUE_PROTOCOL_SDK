#pragma once

 

// Package: Fang_expedition_AreaListGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C
// 0x00A0 (0x0318 - 0x0278)
class UFang_expedition_AreaListGroup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           AreaItemBox;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        AreaListItem1;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        AreaListItem2;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        AreaListItem3;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Dungeon_NotFound;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    GroupTypeName;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderIcon_Field;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderIcon_Town;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        HeaderIconSwitcher;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ListTitleBase;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAreaClick;                                       // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UFang_expedition_AreaListItem_C*> ChildList;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         ListType;                                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD5[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         FieldList;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnFieldClick;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAreaClick__DelegateSignature(int32 Param_Index);
	void OnFieldClick__DelegateSignature(const class FString& Field, int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_AreaListGroup(int32 EntryPoint);
	void Destruct();
	void SetData(const struct FSBFang_expeditionAreaData& AreaData, bool IsField);
	void UpdateData(int32 Param_Index);
	void CB_AreaItemClick(int32 Param_Index);
	void Clear();
	void Initialize(int32 Type);
	void Finish();
	void CheckPlayIcon(TArray<struct FSBFang_expeditionPlayData>& PlayData, bool IsField);
	void GetData(int32 Param_Index, bool* Valid, struct FSBFang_expeditionAreaData* AreaData);
	void SetFieldData(const class FString& Field);
	void CB_FieldItemClick(int32 Param_Index);
	void SetBtn(int32 Param_Index);
	void SetNewMarkListEx(bool InParam, const class FString& InFieldId);
	void ClearFieldList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_AreaListGroup_C">();
	}
	static class UFang_expedition_AreaListGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_AreaListGroup_C>();
	}
};
static_assert(alignof(UFang_expedition_AreaListGroup_C) == 0x000008, "Wrong alignment on UFang_expedition_AreaListGroup_C");
static_assert(sizeof(UFang_expedition_AreaListGroup_C) == 0x000318, "Wrong size on UFang_expedition_AreaListGroup_C");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_AreaListGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, AreaItemBox) == 0x000280, "Member 'UFang_expedition_AreaListGroup_C::AreaItemBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, AreaListItem1) == 0x000288, "Member 'UFang_expedition_AreaListGroup_C::AreaListItem1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, AreaListItem2) == 0x000290, "Member 'UFang_expedition_AreaListGroup_C::AreaListItem2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, AreaListItem3) == 0x000298, "Member 'UFang_expedition_AreaListGroup_C::AreaListItem3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, Dungeon_NotFound) == 0x0002A0, "Member 'UFang_expedition_AreaListGroup_C::Dungeon_NotFound' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, GroupTypeName) == 0x0002A8, "Member 'UFang_expedition_AreaListGroup_C::GroupTypeName' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, HeaderIcon_Field) == 0x0002B0, "Member 'UFang_expedition_AreaListGroup_C::HeaderIcon_Field' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, HeaderIcon_Town) == 0x0002B8, "Member 'UFang_expedition_AreaListGroup_C::HeaderIcon_Town' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, HeaderIconSwitcher) == 0x0002C0, "Member 'UFang_expedition_AreaListGroup_C::HeaderIconSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, ListTitleBase) == 0x0002C8, "Member 'UFang_expedition_AreaListGroup_C::ListTitleBase' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, OnAreaClick) == 0x0002D0, "Member 'UFang_expedition_AreaListGroup_C::OnAreaClick' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, ChildList) == 0x0002E0, "Member 'UFang_expedition_AreaListGroup_C::ChildList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, ListType) == 0x0002F0, "Member 'UFang_expedition_AreaListGroup_C::ListType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, FieldList) == 0x0002F8, "Member 'UFang_expedition_AreaListGroup_C::FieldList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListGroup_C, OnFieldClick) == 0x000308, "Member 'UFang_expedition_AreaListGroup_C::OnFieldClick' has a wrong offset!");

}

