#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C
	 * Size -> 0x01DB (FullSize[0x0453] - InheritedSize[0x0278])
	 */
	class UMapWidget_WarpPointIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn;                                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconImage;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                WarpPointId;                                             // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBMasterWarpPoint                                  WarpPointMasterData;                                     // 0x02B0(0x0068) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsButtonPressEnable;                                     // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UQV1[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapWidget_IconTooltipWarpPoint1_C*                  ToolTip1;                                                // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMapWidget_IconTooltipWarpPoint2_C*                  ToolTip2;                                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWarpPointActive;                                       // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NQL7[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         DefaultButtonStyle_Pressed;                              // 0x0338(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         DefaultButtonStyle_Hovered;                              // 0x03C0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget*                                             CurrTooltip;                                             // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalWarpIcon;                                         // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsGrayOut;                                               // 0x0451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDungeonMode;                                           // 0x0452(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChangeTooltipText(const class FString& InToolTipText);
		void SetDungeonMode(bool InDungeonMode);
		void SetWarpPointEx(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity);
		void SetIconImageEx(bool IsLocalWarpIcon, bool IsHovered);
		void SetGrayOut(bool IsGrayOut);
		void SetHoveredSoundId(ESystemSE InSoundId);
		void SetPressedSoundId(ESystemSE InSoundId);
		void SetIconNormalTintColor(const struct FLinearColor& InColor);
		class UWidget* GetToolTipWidget_1();
		void SetButtonPressEnable(bool IsEnable);
		void SetIconImage(bool IsLocalWarpIcon, bool IsHovered);
		void SetActive(bool IsActive);
		void SetWarpPoint(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity);
		void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_MapWidget_WarpPointIcon(int32_t EntryPoint);
		void OnPressed__DelegateSignature(class UMapWidget_WarpPointIcon_C* InWarpPointIcon);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
