#pragma once

 

// Package: LibraryMenu_LoginBonusInfo

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C
// 0x0090 (0x0308 - 0x0278)
class ULibraryMenu_LoginBonusInfo_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           Acount;                                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AcountImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BunnerBg;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BunnerImage;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescText;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DescTextSizeBox;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DetailBG;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LetterAddressText;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LetterBG;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LoginBonusName;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayerI;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       RemainingTimeText;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   RemainingTimeValue;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeBG;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TimePanel;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(const struct FSBLoginBonusWindowData& LoginBonusData);
	void SetImageData(class UTexture2DDynamic* Texture);
	void SetTextureData(class UTexture2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_LoginBonusInfo_C">();
	}
	static class ULibraryMenu_LoginBonusInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_LoginBonusInfo_C>();
	}
};
static_assert(alignof(ULibraryMenu_LoginBonusInfo_C) == 0x000008, "Wrong alignment on ULibraryMenu_LoginBonusInfo_C");
static_assert(sizeof(ULibraryMenu_LoginBonusInfo_C) == 0x000308, "Wrong size on ULibraryMenu_LoginBonusInfo_C");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, Acount) == 0x000278, "Member 'ULibraryMenu_LoginBonusInfo_C::Acount' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, AcountImage) == 0x000280, "Member 'ULibraryMenu_LoginBonusInfo_C::AcountImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, BunnerBg) == 0x000288, "Member 'ULibraryMenu_LoginBonusInfo_C::BunnerBg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, BunnerImage) == 0x000290, "Member 'ULibraryMenu_LoginBonusInfo_C::BunnerImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, DescText) == 0x000298, "Member 'ULibraryMenu_LoginBonusInfo_C::DescText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, DescTextSizeBox) == 0x0002A0, "Member 'ULibraryMenu_LoginBonusInfo_C::DescTextSizeBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, DetailBG) == 0x0002A8, "Member 'ULibraryMenu_LoginBonusInfo_C::DetailBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, LetterAddressText) == 0x0002B0, "Member 'ULibraryMenu_LoginBonusInfo_C::LetterAddressText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, LetterBG) == 0x0002B8, "Member 'ULibraryMenu_LoginBonusInfo_C::LetterBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, Line) == 0x0002C0, "Member 'ULibraryMenu_LoginBonusInfo_C::Line' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, LoginBonusName) == 0x0002C8, "Member 'ULibraryMenu_LoginBonusInfo_C::LoginBonusName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, PlayerI) == 0x0002D0, "Member 'ULibraryMenu_LoginBonusInfo_C::PlayerI' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, PlayerImage) == 0x0002D8, "Member 'ULibraryMenu_LoginBonusInfo_C::PlayerImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, RemainingTimeText) == 0x0002E0, "Member 'ULibraryMenu_LoginBonusInfo_C::RemainingTimeText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, RemainingTimeValue) == 0x0002E8, "Member 'ULibraryMenu_LoginBonusInfo_C::RemainingTimeValue' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, TimeBG) == 0x0002F0, "Member 'ULibraryMenu_LoginBonusInfo_C::TimeBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, TimePanel) == 0x0002F8, "Member 'ULibraryMenu_LoginBonusInfo_C::TimePanel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusInfo_C, TitleBg) == 0x000300, "Member 'ULibraryMenu_LoginBonusInfo_C::TitleBg' has a wrong offset!");

}

