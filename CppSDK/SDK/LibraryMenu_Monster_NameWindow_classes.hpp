#pragma once

 

// Package: LibraryMenu_Monster_NameWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C
// 0x0048 (0x02C0 - 0x0278)
class ULibraryMenu_Monster_NameWindow_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Boss_Box;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Boss_Text;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EnemyName;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Boss;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Named;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Named_Box;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Named_Text;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TypeName;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetEnemyData(const class FString& InName, const class FString& InType, bool NamedType, bool BossType);
	void ChangeTypeText(const class FString& Type);
	void ChangeTypeVisibility(bool InVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_NameWindow_C">();
	}
	static class ULibraryMenu_Monster_NameWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_NameWindow_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_NameWindow_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_NameWindow_C");
static_assert(sizeof(ULibraryMenu_Monster_NameWindow_C) == 0x0002C0, "Wrong size on ULibraryMenu_Monster_NameWindow_C");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, BG) == 0x000278, "Member 'ULibraryMenu_Monster_NameWindow_C::BG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, Boss_Box) == 0x000280, "Member 'ULibraryMenu_Monster_NameWindow_C::Boss_Box' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, Boss_Text) == 0x000288, "Member 'ULibraryMenu_Monster_NameWindow_C::Boss_Text' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, EnemyName) == 0x000290, "Member 'ULibraryMenu_Monster_NameWindow_C::EnemyName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, Icon_Boss) == 0x000298, "Member 'ULibraryMenu_Monster_NameWindow_C::Icon_Boss' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, Icon_Named) == 0x0002A0, "Member 'ULibraryMenu_Monster_NameWindow_C::Icon_Named' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, Named_Box) == 0x0002A8, "Member 'ULibraryMenu_Monster_NameWindow_C::Named_Box' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, Named_Text) == 0x0002B0, "Member 'ULibraryMenu_Monster_NameWindow_C::Named_Text' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_NameWindow_C, TypeName) == 0x0002B8, "Member 'ULibraryMenu_Monster_NameWindow_C::TypeName' has a wrong offset!");

}

