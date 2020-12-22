CREATE DATABASE IF NOT EXISTS epytodo;
USE epytodo;

CREATE TABLE IF NOT EXISTS `user` (
	`user_id` INT NOT NULL AUTO_INCREMENT,
	`username` varchar(255) NOT NULL UNIQUE,
	`password` varchar(255) NOT NULL,
	`mail` varchar(255) NOT NULL,
	`phone` INT NOT NULL,
	PRIMARY KEY (`user_id`)
);

CREATE TABLE IF NOT EXISTS `task` (
	`task_id` INT NOT NULL AUTO_INCREMENT,
	`title` varchar(255) NOT NULL,
	`begin` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
	`end` DATETIME DEFAULT NULL,
	`status` enum('not started','in progress','done') NOT NULL DEFAULT 'not started',
	PRIMARY KEY (`task_id`)
);

CREATE TABLE IF NOT EXISTS `user_has_task` (
	`fk_user_id` INT NOT NULL,
	`fk_task_id` INT NOT NULL
);
