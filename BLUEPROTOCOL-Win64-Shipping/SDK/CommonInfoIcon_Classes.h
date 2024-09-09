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
	 * WidgetBlueprintGeneratedClass CommonInfoIcon.CommonInfoIcon_C
	 * Size -> 0x01C8 (FullSize[0x0440] - InheritedSize[0x0278])
	 */
	class UCommonInfoIcon_C : public UUserWidget
	{
	public:
		class UImage*                                              InfoIcon;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bTooltipEnable;                                          // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LIHE[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_CommonToolTipDetail_Fixed_C*                    CachedToolTip;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              InfoName;                                                // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              InfoType;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              InfoDesc;                                                // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsInfoNameAndTypeOnly;                                  // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInfoNameAndDescOnly;                                  // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsStackImagineMode;                                     // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NewVar_1;                                                // 0x02C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B0V8[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InfoType2;                                               // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              InfoDesc2;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       StackBEffectiveDisplay;                                  // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FGXN[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        Info;                                                    // 0x02F0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CreateToolTipWidgetifNeeded(class UWBP_CommonToolTipDetail_Fixed_C** OutTooltip);
		class UWidget* Get_InfoIcon_ToolTipWidget_1();
		void SetInfoStackImagine(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc, const class FString& InInfoType2, const class FString& InInfoDesc2, const struct FOwnItemInfo& Info, bool StackBEffectiveDisplay);
		void SetInfoNameAndDesc(const class FString& InInfoName, const class FString& InInfoDesc);
		void SetInfoNameAndType(const class FString& InInfoName, const class FString& InInfoType);
		void SetInfo(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
