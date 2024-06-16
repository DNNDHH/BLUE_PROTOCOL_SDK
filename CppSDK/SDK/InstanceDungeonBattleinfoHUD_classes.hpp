#pragma once

 

// Package: InstanceDungeonBattleinfoHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C
// 0x00B8 (0x0358 - 0x02A0)
class UInstanceDungeonBattleinfoHUD_C final : public USBDungeonBattleinfoHUDWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_1;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_2;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_3;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_4;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_5;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_6;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_7;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_8;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_9;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerImage2_10;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WiatBossBattleBG;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<bool>                                  IsDemo;                                            // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  InitDemoBP;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UDemoHUD_C*>                     DemoHUDUI;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsBossAreaBP;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4617[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerMaxNumBP;                                    // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerInAreaNumBP;                                 // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InstanceDungeonBattleinfoHUD(int32 EntryPoint);
	void Construct();
	void SetPlayerReadyVisibility(class UHorizontalBox* InHorizonalBox, int32 InMax, int32 InReadyNum);
	void UpdateDemoHUD(TArray<bool>& InDemoPlay, TArray<class UDemoHUD_C*>& InHUD);
	void SetRootVisibility(bool InVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InstanceDungeonBattleinfoHUD_C">();
	}
	static class UInstanceDungeonBattleinfoHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInstanceDungeonBattleinfoHUD_C>();
	}
};
static_assert(alignof(UInstanceDungeonBattleinfoHUD_C) == 0x000008, "Wrong alignment on UInstanceDungeonBattleinfoHUD_C");
static_assert(sizeof(UInstanceDungeonBattleinfoHUD_C) == 0x000358, "Wrong size on UInstanceDungeonBattleinfoHUD_C");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, UberGraphFrame) == 0x0002A0, "Member 'UInstanceDungeonBattleinfoHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, CanvasPanel_0) == 0x0002A8, "Member 'UInstanceDungeonBattleinfoHUD_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, Image_0) == 0x0002B0, "Member 'UInstanceDungeonBattleinfoHUD_C::Image_0' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, Image_1) == 0x0002B8, "Member 'UInstanceDungeonBattleinfoHUD_C::Image_1' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_1) == 0x0002C0, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_1' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_2) == 0x0002C8, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_2' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_3) == 0x0002D0, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_3' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_4) == 0x0002D8, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_4' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_5) == 0x0002E0, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_5' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_6) == 0x0002E8, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_6' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_7) == 0x0002F0, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_7' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_8) == 0x0002F8, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_8' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_9) == 0x000300, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_9' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerImage2_10) == 0x000308, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerImage2_10' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, WiatBossBattleBG) == 0x000310, "Member 'UInstanceDungeonBattleinfoHUD_C::WiatBossBattleBG' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, IsDemo) == 0x000318, "Member 'UInstanceDungeonBattleinfoHUD_C::IsDemo' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, InitDemoBP) == 0x000328, "Member 'UInstanceDungeonBattleinfoHUD_C::InitDemoBP' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, DemoHUDUI) == 0x000338, "Member 'UInstanceDungeonBattleinfoHUD_C::DemoHUDUI' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, IsBossAreaBP) == 0x000348, "Member 'UInstanceDungeonBattleinfoHUD_C::IsBossAreaBP' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerMaxNumBP) == 0x00034C, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerMaxNumBP' has a wrong offset!");
static_assert(offsetof(UInstanceDungeonBattleinfoHUD_C, PlayerInAreaNumBP) == 0x000350, "Member 'UInstanceDungeonBattleinfoHUD_C::PlayerInAreaNumBP' has a wrong offset!");

}

