#pragma once

 

// Package: SkillTree_SkillIconBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillTree_SkillIconBase.SkillTree_SkillIconBase_C
// 0x0110 (0x0388 - 0x0278)
class USkillTree_SkillIconBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillId;                                           // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B4D[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillLevel;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B4E[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 IconRef;                                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWidget*                                EquipmentIconRef;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UImage*                                 IconBgRef1;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UImage*                                 ElementIconRef;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<ESBSkillIconBgType, class UTexture2D*>   IconBgImageList;                                   // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBSkillElementIconType, class UTexture2D*> ElementIconImageList;                              // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(int32 Param_SkillId);
	void OnHovered__DelegateSignature(int32 Param_SkillId);
	void OnUnhovered__DelegateSignature(int32 Param_SkillId);
	void ExecuteUbergraph_SkillTree_SkillIconBase(int32 EntryPoint);
	void Destruct();
	void Init(bool IsPassive, int32 Param_SkillId, int32 Param_SkillLevel);
	void Update();
	void UpdateSimple();
	void SetEquipmentIconVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTree_SkillIconBase_C">();
	}
	static class USkillTree_SkillIconBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTree_SkillIconBase_C>();
	}
};
static_assert(alignof(USkillTree_SkillIconBase_C) == 0x000008, "Wrong alignment on USkillTree_SkillIconBase_C");
static_assert(sizeof(USkillTree_SkillIconBase_C) == 0x000388, "Wrong size on USkillTree_SkillIconBase_C");
static_assert(offsetof(USkillTree_SkillIconBase_C, UberGraphFrame) == 0x000278, "Member 'USkillTree_SkillIconBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, OnClicked) == 0x000280, "Member 'USkillTree_SkillIconBase_C::OnClicked' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, SkillId) == 0x000290, "Member 'USkillTree_SkillIconBase_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, OnHovered) == 0x000298, "Member 'USkillTree_SkillIconBase_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, OnUnhovered) == 0x0002A8, "Member 'USkillTree_SkillIconBase_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, SkillLevel) == 0x0002B8, "Member 'USkillTree_SkillIconBase_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, IconRef) == 0x0002C0, "Member 'USkillTree_SkillIconBase_C::IconRef' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, EquipmentIconRef) == 0x0002C8, "Member 'USkillTree_SkillIconBase_C::EquipmentIconRef' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, IconBgRef1) == 0x0002D0, "Member 'USkillTree_SkillIconBase_C::IconBgRef1' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, ElementIconRef) == 0x0002D8, "Member 'USkillTree_SkillIconBase_C::ElementIconRef' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, IconBgImageList) == 0x0002E0, "Member 'USkillTree_SkillIconBase_C::IconBgImageList' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, ElementIconImageList) == 0x000330, "Member 'USkillTree_SkillIconBase_C::ElementIconImageList' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconBase_C, UIBlocker) == 0x000380, "Member 'USkillTree_SkillIconBase_C::UIBlocker' has a wrong offset!");

}

