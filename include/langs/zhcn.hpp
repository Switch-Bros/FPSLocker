#include <array>

namespace ZHCN {
	const std::array strings = {
		//Main Menu
		"删除设置",
		"删除补丁",
		"SaltyNX没有运行!",
		"在sdcard内未检查到NX-FPS插件!",
		"游戏未运行!",
		"全部游戏",
		"所有游戏",
		"游戏列表",
		"屏幕设置",
		"切换目标FPS",
		"游戏已关闭! FPSLocker已禁用!",
		"游戏未运行! FPSLocker已禁用!",
		"游戏正在运行.",
		"NX-FPS未运行!",
		"NX-FPS正在运行, 等待游戏帧.",
		"重新进入FPSLocker来再次检查.",
		"NX-FPS正在运行.",
		"补丁当前强制60Hz模式",
		"增大目标FPS",
		"减小目标FPS",
		"切换目标FPS",
		"禁用自定义的目标FPS",
		"高级设置",
		"保存当前设置",
		"刷新率分频器:\n\uE019 0 (Unused)",
		"刷新率分频器:\n\uE019 %d (%.1f FPS)",
		"刷新率分频器:\n\uE019 %d (%d FPS)",
		"刷新率分频器:\n\uE019 %d (Wrong)",
		"自定义目标FPS:\n\uE019 未启用",
		"自定义目标FPS:\n\uE019 %d",

		//Advanced Settings
		"设置帧缓冲",
		"设置将会在下次游戏启动时生效.",
		"在修改后请保存当前设置.",
		"双重缓冲",
		"三重缓冲",
		"强制三重缓冲",
		"强制四重缓冲",
		"四重缓冲",
		"NVN垂直同步",
		"模式",
		"启动",
		"半同步",
		"禁用",
		"开",
		"关",
		"半同步",
		"无法找到配置文件\nTID: %016lX\nBID: %016lX",
		"配置文件错误: 0x%X",
		"补丁不存在.\n请使用\"转换配置文件到补丁\"\n来创建补丁!",
		"补丁不存在.",
		"新配置文件已下载.\n请使用\"转换配置文件到补丁\"\n来使其生效!",
		"补丁已存在.",
		"高级设置",
		"图形API: NVN",
		"垂直同步",
		"图形API: EGL",
		"图形API: Vulkan",
		"FPSLocker游戏补丁",
		"找到有效的配置文件!",
		"请在转换配置文件到补丁后重启游戏!",
		"转换配置文件到补丁",
		"成功创建补丁.\n请重新启动游戏并修改\n目标FPS来应用补丁!",
		"创建补丁时发生错误: 0x%x",
		"删除补丁",
		"补丁已成功删除.",
		"这可能需要最多30秒.",
		"正在下载游戏配置文件",
		"正在从Warehouse内查找配置文件...\n完成前将不能退出!",
		"杂项",
		"暂停后台游戏",
		"游戏补丁已加载.",
		"Master Write已加载.",
		"游戏补丁未生效.",
		"Set/当前/可用 帧缓冲: %d/%d/%d",
		"当前帧缓冲: %d",
		"连接超时!",
		"配置文件不可用! RC: 0x%x",
		"配置文件不可用!\n正在检查Warehouse...\n完成前将不能退出!",
		"配置文件不可用!\n正在检查Warehouse...\n获取数据超时!",
		"配置文件不可用!\n正在检查Warehouse...\n发生连接错误!",
		"没有新配置文件可用.",
		"无可用网络连接!",
		"这个游戏不需要补丁!",
		"Warehouse内未包含这个游戏!",
		"Warehouse内包含游戏的不同版本.\n另一版本不需要补丁,\n你的版本也可能不需要!",
		"Warehouse内包含游戏的不同版本.\n另一版本需要使用补丁,\n但也没有可用的配置文件!",
		"Warehouse内包含游戏的不同版本.\n存在另一版本的配置文件!",
		"Warehouse内包含这个游戏\n且这个版本的游戏需要使用补丁,\n但没有可用的配置文件!",
		"发生连接错误! RC: 0x%x",
		
		//Display Settings
		"跳帧测试器",

		"如何使用:\n"
		"1. 请找一个可以手动设置快门速度\n"
		"   和ISO(感光度)的照相机.\n"
		"2. 设置快门速度到1/10s或更长,\n"
		"   并且设置ISO使画面亮度适中\n"
		"   (通常, 1/10s快门和ISO50工作良好).\n"
		"3. 按下 \uE0E0 来测试.\n"
		"4. 拍下显示器的照片.\n"
		"5. 如果拍摄到的除第一个和最后一个\n"
		"   的所有块, 没有均匀的亮起\n"
		"   则你的显示器不原生支持当前刷新率\n\n"
		"   在切换到其他刷新率和FPS前请考虑\n"
		"   即使你的显示器正在跳帧,\n"
		"   通常情况下, 比起更低的平均FPS\n"
		"   运行在更高的刷新率下, 就视觉流畅度\n"
		"   仍为显示器跳帧较好, 因为内置的\n"
		"   硬件跳帧方案会输出更均匀的帧时间",

		"按 \uE0E1 来退出",
		"帧渲染耗时太长!\n请到主屏幕重启游戏并重试.",
		
		"这个菜单将会测试60Hz以下的刷新率\n"
		"顺序为40/45/50/55Hz.\n"
		"你需要在出现提示的15秒内按下手柄上的对应按键\n" // or "你需要在出现提示的15秒内\n按下控制器上的对应按键\n"
		"来确认当前显示器可以在测试中的刷新率正常显示.\n" // or "来确认当前使用的显示器\n可以在测试中的刷新率正常显示.\n"
		"如果15秒内没有输入则会测试下一个刷新率.",

		"请按下 X 键来开始.",
		"显示器降频助手",
		"在 %dp 分辨率下不支持!",
		"请先关闭游戏!",
		"请按下 ZL 来确认你的显示器支持%dHz.",
		"请按下 X 来确认你的显示器支持%dHz.",
		"请按下 Y 来确认你的显示器支持%dHz.",
		"请按下 ZR 来确认你的显示器支持%dHz.",

		"这个菜单将会测试60Hz到%dHz的刷新率.\n"
		"这项测试仅对1080p分辨率有意义\n"
		"因为在720P或更低的分辨率下\n"
		"不存在带宽问题, 一切应工作良好\n\n"
		"你需要在出现提示的10秒内按下手柄上的对应按键\n" // or "你需要在出现提示的10秒内\n按下控制器上的对应按键\n"
		"来确认当前刷新率可以在测试中的分辨率正常显示.\n" // or "来确认当前使用的刷新率\n可以在测试中的分辨率正常显示.\n"
		"如果10秒内没有输入则会测试下一个刷新率.\n"
		"这项测试最多会持续%d秒.",

		"显示器超频助手",
		"底座模式1080p显示器手动设置",
		"底座模式显示器更多设置",
		"允许补丁强制60Hz模式",
		"对于不匹配的目标FPS\n使用最低可用的刷新率.",
		"n/d",
		"回报的最大可用刷新率: %uHz\nmyDP链路速率: %s\n配置文件ID: %08X",
		"底座模式显示器设置",

		"在1080p下允许使用的刷新率",
		"1080p超频助手",
		"更多设置",

		"现在没有连接到底座.\n"
		"请将你的主机连接到底座后\n"
		"再试一次.",

		"变更刷新率",
		"增大刷新率",
		"减小刷新率",
		"将刷新率与目标FPS同步.",
		"掌机模式同步刷新率",
		"底座模式设置",
		"Retro Remake模式",
		"当前显示器刷新率: %dHz",

		"警告: 这是实验性的功能!\n\n"
		"如果使用不当, 这个功能可能\n"
		"对显示器硬件造成永久性的伤害.\n\n"
		"如果按下\"同意\", 你知晓并同意:\n"
		"对于使用本工具中造成的任何问题,\n"
		"将由你承担全部责任.",

		"显示器高级设置警告",
		"拒绝",
		"同意",
		"强制使用英语作为显示语言",
		"底座模式同步刷新率"
	};

	const std::array teslaStrings = {
	   "返回",
	   "确定"
	};

	static_assert(teslaStrings.size() == 2);
	static_assert(strings.size() == 129);
}