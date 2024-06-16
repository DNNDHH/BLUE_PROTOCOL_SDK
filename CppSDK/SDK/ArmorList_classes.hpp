#pragma once

 

// Package: ArmorList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArmorList.ArmorList_C
// 0x00E8 (0x0360 - 0x0278)
class UArmorList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CategoryIcon;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TitleTxt;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_37;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     TextWidget;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSlateBrush                            InCategoryImage;                                   // 0x02B8(0x0088)(Edit, BlueprintVisible)
	int32                                         InTitleID;                                         // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5391[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      InTextTable;                                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Infontsize;                                        // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InShare;                                           // 0x0354(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ArmorList(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetData(const TArray<struct FOwnItemInfo>& InOwnItemInfo);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArmorList_C">();
	}
	static class UArmorList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArmorList_C>();
	}
};
static_assert(alignof(UArmorList_C) == 0x000008, "Wrong alignment on UArmorList_C");
static_assert(sizeof(UArmorList_C) == 0x000360, "Wrong size on UArmorList_C");
static_assert(offsetof(UArmorList_C, UberGraphFrame) == 0x000278, "Member 'UArmorList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UArmorList_C, Base) == 0x000280, "Member 'UArmorList_C::Base' has a wrong offset!");
static_assert(offsetof(UArmorList_C, CategoryIcon) == 0x000288, "Member 'UArmorList_C::CategoryIcon' has a wrong offset!");
static_assert(offsetof(UArmorList_C, Line) == 0x000290, "Member 'UArmorList_C::Line' has a wrong offset!");
static_assert(offsetof(UArmorList_C, TitleTxt) == 0x000298, "Member 'UArmorList_C::TitleTxt' has a wrong offset!");
static_assert(offsetof(UArmorList_C, VerticalBox_37) == 0x0002A0, "Member 'UArmorList_C::VerticalBox_37' has a wrong offset!");
static_assert(offsetof(UArmorList_C, TextWidget) == 0x0002A8, "Member 'UArmorList_C::TextWidget' has a wrong offset!");
static_assert(offsetof(UArmorList_C, InCategoryImage) == 0x0002B8, "Member 'UArmorList_C::InCategoryImage' has a wrong offset!");
static_assert(offsetof(UArmorList_C, InTitleID) == 0x000340, "Member 'UArmorList_C::InTitleID' has a wrong offset!");
static_assert(offsetof(UArmorList_C, InTextTable) == 0x000348, "Member 'UArmorList_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UArmorList_C, Infontsize) == 0x000350, "Member 'UArmorList_C::Infontsize' has a wrong offset!");
static_assert(offsetof(UArmorList_C, InShare) == 0x000354, "Member 'UArmorList_C::InShare' has a wrong offset!");

}

